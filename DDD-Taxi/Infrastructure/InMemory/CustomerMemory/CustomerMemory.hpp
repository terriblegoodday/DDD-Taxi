//
//  CustomerMemory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef CustomerMemory_hpp
#define CustomerMemory_hpp

#include "Customer.hpp"
#include "CustomerRepository.hpp"
#include <stdio.h>

class CustomerMemory: public CustomerRepository {
    vector<Customer> customers;
    
public:
    Customer retrieve(CustomerId byId) override;
    CustomerId persist(Customer & customer) override;
};

#endif /* CustomerMemory_hpp */
