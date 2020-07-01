//
//  DriverMemory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef DriverMemory_hpp
#define DriverMemory_hpp

#include "DriverRepository.hpp"
#include "Driver.hpp"
#include "DriverFactory.hpp"

#include <stdio.h>
#include <vector>

using namespace std;

class DriverMemory: public DriverRepository {
protected:
    vector<Driver> drivers;
    
public:
    Driver retrieve(DriverId byId) override;
    DriverId persist(Driver & driver) override;
    
    DriverMemory();
};

#endif /* DriverMemory_hpp */
