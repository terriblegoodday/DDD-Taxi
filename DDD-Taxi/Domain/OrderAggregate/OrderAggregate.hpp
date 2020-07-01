//
//  OrderAggregate.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef OrderAggregate_hpp
#define OrderAggregate_hpp

#include <stdio.h>
#include <vector>
#include "Order.hpp"

using namespace std;

class OrderAggregate {
    vector<Order> orders;
    
public:
    vector<Order> & getOrders();
    OrderAggregate(vector<Order> fromOrders);
};

#endif /* OrderAggregate_hpp */
