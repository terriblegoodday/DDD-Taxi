//
//  CustomerTestMemory.hpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef CustomerTestMemory_hpp
#define CustomerTestMemory_hpp

#include <stdio.h>
#include "CustomerMemory.hpp"

class CustomerTestMemory: public CustomerMemory {
    
public:
    void showAllCustomers();
};

#endif /* CustomerTestMemory_hpp */
