//
//  CustomerTestMemory.cpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "CustomerTestMemory.hpp"

void CustomerTestMemory::showAllCustomers() {
    for (Customer & customer: customers) {
        cout << customer;
    }
}
