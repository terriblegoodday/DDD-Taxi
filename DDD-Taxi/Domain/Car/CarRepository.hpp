//
//  CarRepository.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef CarRepository_hpp
#define CarRepository_hpp

#include <stdio.h>
#include "Car.hpp"

class CarRepository {
    
public:
    virtual Car retrieve(CarId byId) = 0;
    virtual CarId persist(Car & car) = 0;
    virtual Car retrieveByTier(Car::Tier tier) = 0;
};

#endif /* CarRepository_hpp */
