//
//  DriverTestMemory.hpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef DriverTestMemory_hpp
#define DriverTestMemory_hpp

#include "DriverMemory.hpp"
#include <stdio.h>

class DriverTestMemory: public DriverMemory {
public:
    void showAllDrivers();
};

#endif /* DriverTestMemory_hpp */
