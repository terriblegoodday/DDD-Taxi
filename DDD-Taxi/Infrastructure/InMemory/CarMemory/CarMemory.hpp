//
//  CarMemory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef CarMemory_hpp
#define CarMemory_hpp

#include <stdio.h>
#include <vector>
#include "Car.hpp"
#include "CarFactory.hpp"
#include "CarRepository.hpp"

using namespace std;

class CarMemory: public CarRepository {
    vector<Car> cars;
    
public:
    Car retrieve(CarId byId) override;
    CarId persist(Car & car) override;
    Car retrieveByTier(Car::Tier tier) override;;
};

#endif /* CarMemory_hpp */

using namespace std;
