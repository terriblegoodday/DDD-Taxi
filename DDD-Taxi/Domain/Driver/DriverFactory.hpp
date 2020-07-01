//
//  DriverFactory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef DriverFactory_hpp
#define DriverFactory_hpp

#include <stdio.h>
#include "Driver.hpp"

class DriverFactory {
    
public:
    Driver registerDriver(string firstName, string lastName);
};

#endif /* DriverFactory_hpp */
