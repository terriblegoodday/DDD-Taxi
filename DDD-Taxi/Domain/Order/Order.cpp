//
//  Order.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "Order.hpp"

Order::Order(Time time, Car & car, Customer & customer): strongCarLink(car) {
    this->time = time;
    this->weakCarLink = car.getUid();
    this->weakCustomerLink = customer.getUid();
    string toHash = to_string(time.hourBegin) + to_string(time.hourEnd) + to_string(car.getUid());
    this->uid = HashFactory::getHash(toHash, Settings::hashBoundary);
}

Time Order::getObjTime() {
    return time;
}

string Order::getTime() const {
    return to_string(time.hourBegin) + "–" + to_string(time.hourEnd);
}

OrderId Order::getUid() const {
    return uid;
}

void Order::setUid(OrderId uid) {
    this->uid = uid;
}

CustomerId Order::getCustomerUid() const {
    return weakCustomerLink;
}

ostream & operator<<(ostream & destination, const Order & source) {
    destination << source.getCustomerUid() << " " << source.getTime() << endl;
    return destination;
}
