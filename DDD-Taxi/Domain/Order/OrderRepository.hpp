//
//  OrderRepository.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef OrderRepository_hpp
#define OrderRepository_hpp

#include <stdio.h>
#include "Order.hpp"
#include "OrderAggregate.hpp"
#include "Customer.hpp"

class OrderRepository {
    
public:
    virtual Order retrieve(OrderId byId) = 0;
    virtual OrderId persist(Order & order) = 0;
    virtual OrderAggregate retrieveAggregate(CustomerId byCustomer) = 0;
};

#endif /* OrderRepository_hpp */
