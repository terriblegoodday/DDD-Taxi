//
//  OrderFactory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef OrderFactory_hpp
#define OrderFactory_hpp

#include <stdio.h>
#include "Order.hpp"
#include "Car.hpp"
#include "Time.hpp"
#include "Customer.hpp"

class OrderFactory {
    
public:
    Order registerOrder(Car & withCar, Customer & customer, Time & time);
};

#endif /* OrderFactory_hpp */
