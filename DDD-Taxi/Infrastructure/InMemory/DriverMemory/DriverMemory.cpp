//
//  DriverMemory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "DriverMemory.hpp"

DriverMemory::DriverMemory() {
    DriverFactory driverFactory;
    Driver d1 = driverFactory.registerDriver("Will", "Smith");
    Driver d2 = driverFactory.registerDriver("Natasha", "Pogubnaya");
    Driver d3 = driverFactory.registerDriver("Stacie", "Wilton");
    drivers[d1.getUid()] = d1;
    drivers[d2.getUid()] = d2;
    drivers[d3.getUid()] = d3;
}

Driver DriverMemory::retrieve(DriverId byId) {
    vector<Driver>::iterator it = find_if(drivers.begin(), drivers.end(), [byId](const Driver & driver) {
        if (driver.getUid() == byId) return true;
        return false;
    });
    if (it != drivers.end()) return *it;
    throw out_of_range("No driver with the id exists");
}

DriverId DriverMemory::persist(Driver & driver) {
    // it should also check if there exist collisions but this is the naive in-memory implementation of persistent storage for tests so it's kinda ok
    
    drivers.push_back(driver);
    return driver.getUid();
};
