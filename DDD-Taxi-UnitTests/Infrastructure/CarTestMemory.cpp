//
//  CarTestMemory.cpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "CarTestMemory.hpp"

void CarTestMemory::showAllCars() {
    for (Car & car: cars) {
        cout << car;
    }
}
