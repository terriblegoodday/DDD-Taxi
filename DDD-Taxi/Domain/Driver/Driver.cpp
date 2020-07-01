//
//  Driver.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "Driver.hpp"

Driver::Driver(string firstName, string lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->uid = HashFactory::getHash(firstName + lastName);
}

string Driver::getDescription() {
    return firstName + " " + lastName + " | " + to_string(rating) + "(" + to_string(rateCount) + ")";
}

DriverId Driver::getUid() const {
    return uid;
}
