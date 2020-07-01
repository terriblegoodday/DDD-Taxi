//
//  CustomerMemory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "CustomerMemory.hpp"

Customer CustomerMemory::retrieve(CustomerId byId) {
    vector<Customer>::iterator it = find_if(customers.begin(), customers.end(), [byId](const Customer & customer) {
        return customer.getUid() == byId;
    });
    
    if (it == customers.end()) throw out_of_range("No car available");
    return *it;
}

CustomerId CustomerMemory::persist(Customer & customer) {
    customers.push_back(customer);
    return customer.getUid();
}
