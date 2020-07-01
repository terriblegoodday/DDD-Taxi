//
//  OrderAggregate.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "OrderAggregate.hpp"

OrderAggregate::OrderAggregate(vector<Order> fromOrders) {
    orders = fromOrders;
}

vector<Order> & OrderAggregate::getOrders() {
    return orders;
}
