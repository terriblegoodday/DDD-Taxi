//
//  DriverTestMemory.cpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "DriverTestMemory.hpp"

void DriverTestMemory::showAllDrivers() {
    for (Driver & driver: drivers) {
        cout << driver;
    }
}
