//
//  CarFactory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef CarFactory_hpp
#define CarFactory_hpp

#include <stdio.h>
#include "Car.hpp"
#include "DriverFactory.hpp"

class CarFactory {

public:
    Car registerUberX();
    Car registerUberXL();
    Car registerUberSelect();
    Car registerUberBlack();
};

#endif /* CarFactory_hpp */
