//
//  OrderTaxi.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "OrderTaxi.hpp"

string OrderTaxi::getDescription() {
    return "OrderTaxi";
}

void OrderTaxi::execute() {
    try {
        delegate->inProgress(this);
        Car car = carRepository->retrieveByTier(carTier);
        OrderFactory orderFactory = OrderFactory();
        Order order = orderFactory.registerOrder(car, customer, time);
        orderRepository->persist(order);
        delegate->didFinishOperation(this);
    } catch (std::exception &e) {
        delegate->didFinishWithError(this, e.what());
    }
    
}

OrderTaxi::OrderTaxi(CarRepository * carRepository, OrderRepository * orderRepository, Customer & customer, Time time, Car::Tier tier): customer(customer), time(time), carTier(tier), carRepository(carRepository), orderRepository(orderRepository) {
}
