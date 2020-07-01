//
//  CarMemory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "CarMemory.hpp"

Car CarMemory::retrieve(CarId byId) {
    vector<Car>::iterator it = find_if(cars.begin(), cars.end(), [byId](const Car & car) {
        return car.getUid() == byId;
    });
    
    if (it == cars.end()) throw out_of_range("No car available");
    return *it;
}

Car CarMemory::retrieveByTier(Car::Tier tier) {
    vector<Car> filteredCars;
    
    copy_if(cars.begin(), cars.end(), back_inserter(filteredCars), [tier](const Car & car) {
        return car.getTier() == tier;
    });
    
    auto s = filteredCars.size();
    auto random = rand() % s;
    return filteredCars[random];
}

CarId CarMemory::persist(Car & car) {
    cars.push_back(car);
    return car.getUid();
}
