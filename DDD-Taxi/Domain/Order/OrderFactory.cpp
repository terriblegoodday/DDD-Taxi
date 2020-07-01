//
//  OrderFactory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "OrderFactory.hpp"

Order OrderFactory::registerOrder(Car & withCar, Customer & customer, Time & time) {
    return Order(time, withCar, customer);
}
