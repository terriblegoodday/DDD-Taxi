//
//  OrderMemory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "OrderMemory.hpp"

Order OrderMemory::retrieve(OrderId byId) {
    vector<Order>::iterator it = find_if(orders.begin(), orders.end(), [byId](const Order & order) {
        return order.getUid() == byId;
    });
    
    if (it != orders.end()) return *it;
    throw out_of_range("No Order with the id exists");
}

OrderAggregate OrderMemory::retrieveAggregate(CustomerId customer) {
    vector<Order> filteredOrders;
    
    copy_if(filteredOrders.begin(), filteredOrders.end(), back_inserter(filteredOrders), [customer](const Order & order) {
        return order.getCustomerUid() == customer;
    });
    
    return OrderAggregate(filteredOrders);
}

OrderId OrderMemory::persist(Order & order) {
    orders.push_back(order);
    return order.getUid();
}
