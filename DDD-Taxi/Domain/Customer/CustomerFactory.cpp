//
//  CustomerFactory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "CustomerFactory.hpp"

Customer CustomerFactory::registerCustomer(string firstName, string lastName) {
    if (firstName != "" && lastName != "") return Customer(firstName, lastName);
    else {
        throw domain_error("First name and last name blank");
    }
}
