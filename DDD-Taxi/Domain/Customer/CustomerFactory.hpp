//
//  CustomerFactory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef CustomerFactory_hpp
#define CustomerFactory_hpp

#include <stdio.h>
#include "Customer.hpp"

class CustomerFactory {
    
public:
    Customer registerCustomer(string firstName, string lastName);
};

#endif /* CustomerFactory_hpp */
