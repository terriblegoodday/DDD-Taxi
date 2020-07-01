//
//  Customer.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "Customer.hpp"

Customer::Customer(string firstName, string lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->rating = 5;
    this->uid  = HashFactory::getHash(firstName + lastName, Settings::hashBoundary);
}

string Customer::getRating() {
    return to_string(rating) + "(" + to_string(rateCount) + ")";
}

string Customer::getDescription() {
    return firstName + " " + lastName + " | " + to_string(rating) + "(" + to_string(rateCount) + ")";
}

void Customer::addToRating(unsigned int rating) {
    this->rating = (this->rating + (double)rating) / 2.0;
}

CustomerId Customer::getUid() const {
    return uid;
}
