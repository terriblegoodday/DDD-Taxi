//
//  AvailableTime.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "AvailableTime.hpp"

AvailableTime::AvailableTime(OrderRepository * orderRepository,
              Customer * customer, Timetable * timetable) {
    this->orderRepository = orderRepository;
    this->customer = customer;
    this->timetable = timetable;
    
}

string AvailableTime::getDescription() {
    return "AvailableTime use case";
}

void AvailableTime::execute() {
    delegate->inProgress(this);
    try {
        OrderAggregate orderAggregate = orderRepository->retrieveAggregate(customer->getUid());
        for (auto order: orderAggregate.getOrders()) {
            timetable->addTime(order.getObjTime());
        }
        delegate->didFinishOperation(this);
    } catch(const std::exception& e) {
        delegate->didFinishWithError(this, e.what());
    }
}
