//
//  OrderTaxi.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "OrderTaxi.hpp"

string OrderTaxi::getDescription() {
    string description = "OrderTaxi " + customer.getDescription() + " " + to_string(time.begin()) + "-" + to_string(time.end()) + " ";
    
    if (car != nullptr) description += car->getDescription();
    return description;
}

void OrderTaxi::execute() {
    try {
        delegate->inProgress(this);
        car = new Car(carRepository->retrieveByTier(carTier));
        OrderFactory orderFactory = OrderFactory();
        Order order = orderFactory.registerOrder(*car, customer, time);
        orderRepository->persist(order);
        int randomMark = 4 + rand() % 2;
        customer.addToRating(randomMark);
        customerRepository->persist(customer);
        delegate->didFinishOperation(this);
    } catch (std::exception &e) {
        delegate->didFinishWithError(this, e.what());
    }
    
}

OrderTaxi::OrderTaxi(CarRepository * carRepository, OrderRepository * orderRepository,  CustomerRepository * customerRepository, Customer & customer, Time time, Car::Tier tier): customer(customer), time(time), carTier(tier), carRepository(carRepository), orderRepository(orderRepository), customerRepository(customerRepository) {
}

OrderTaxi::~OrderTaxi() {
    delete car;
}
