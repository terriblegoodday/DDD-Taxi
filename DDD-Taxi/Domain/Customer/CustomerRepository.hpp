//
//  CustomerRepository.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef CustomerRepository_hpp
#define CustomerRepository_hpp

#include <stdio.h>
#include "Customer.hpp"

class CustomerRepository {
    
public:
    virtual Customer retrieve(CustomerId byId) = 0;
    virtual CustomerId persist(Customer & customer) = 0;
    virtual Customer retrieve(string firstName, string lastName) = 0;
    virtual Customer retrieveOrRegister(string firstName, string lastName) = 0;
};

#endif /* CustomerRepository_hpp */
