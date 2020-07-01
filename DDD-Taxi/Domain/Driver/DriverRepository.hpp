//
//  DriverRepository.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef DriverRepository_hpp
#define DriverRepository_hpp

#include <stdio.h>
#include "Driver.hpp"

class DriverRepository {
    
public:
    virtual Driver retrieve(DriverId byId) = 0;
    virtual DriverId persist(DriverId & driver) = 0;
};

#endif /* DriverRepository_hpp */

