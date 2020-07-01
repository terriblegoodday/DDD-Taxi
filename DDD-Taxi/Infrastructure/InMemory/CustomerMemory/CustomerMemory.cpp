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
    
    if (it == customers.end()) throw out_of_range("No customer available");
    return *it;
}

Customer CustomerMemory::retrieve(string firstName, string lastName) {
    return retrieve(HashFactory::getHash(firstName+lastName, Settings::hashBoundary));
}

Customer CustomerMemory::retrieveOrRegister(string firstName, string lastName) {
    try {
        return retrieve(firstName, lastName);
    } catch (out_of_range & e) {
        auto customerFactory = CustomerFactory();
        auto customer = customerFactory.registerCustomer(firstName, lastName);
        persist(customer);
        return customer;
    }
}

CustomerId CustomerMemory::persist(Customer & customer) {
    auto customerId = customer.getUid();
    vector<Customer>::iterator it = find_if(customers.begin(), customers.end(), [customerId](const Customer & customer) {
        return customer.getUid() == customerId;
    });
    
    if (it == customers.end()) customers.push_back(customer);
    else *it = customer;
    return customerId;
}
