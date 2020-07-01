//
//  OrderMemory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef OrderMemory_hpp
#define OrderMemory_hpp

#include <stdio.h>
#include <vector>
#include "Order.hpp"
#include "OrderAggregate.hpp"
#include "OrderRepository.hpp"
#include "Customer.hpp"

using namespace std;

class OrderMemory: public OrderRepository {
protected:
    vector<Order> orders;
    
public:
    Order retrieve(OrderId byId) override;
    OrderId persist(Order & order) override;
    OrderAggregate retrieveAggregate(CustomerId byCustomer) override;
};

#endif /* OrderMemory_hpp */
