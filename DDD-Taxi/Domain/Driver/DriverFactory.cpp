//
//  DriverFactory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "DriverFactory.hpp"

Driver DriverFactory::registerDriver(string firstName, string lastName) {
    if (firstName != "" && lastName != "") return Driver(firstName, lastName);
    return Driver("John", "Appleseed");
}
