//
//  OrderTestMemory.cpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "OrderTestMemory.hpp"

void OrderTestMemory::showAllOrders() {
    for (Order & order: orders) {
        cout << order;
    }
}
