//
//  OrderTestMemory.hpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef OrderTestMemory_hpp
#define OrderTestMemory_hpp

#include "OrderMemory.hpp"
#include "Order.hpp"
#include <stdio.h>

class OrderTestMemory: public OrderMemory {
    
public:
    void showAllOrders();
};

#endif /* OrderTestMemory_hpp */
