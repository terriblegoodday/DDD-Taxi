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
    
    OrderAggregate(vector<Order> fromOrders);
    
public:
    vector<Order> & getOrders();
    
    friend class OrderRepository;
};

#endif /* OrderAggregate_hpp */
