//
//  CarFactory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "CarFactory.hpp"

Car CarFactory::registerUberX() {
    string color = "white";
    string brand = "toyota";
    
    int plateNumber = rand() % 1000;
    string plate = "AB " + to_string(plateNumber) + " CDE";
    
    Car car(color, brand, plate);
    car.setTier(Car::Tier::x);
    
    return car;
}

Car CarFactory::registerUberXL() {
    string color = "yellow";
    string brand = "honda";
    
    int plateNumber = rand() % 1000;
    string plate = "XL " + to_string(plateNumber) + " CDE";
    
    Car car(color, brand, plate);
    car.setTier(Car::xl);
    
    return car;
}

Car CarFactory::registerUberSelect() {
    string color = "black";
    string brand = "bmw";
    
    int plateNumber = rand() % 1000;
    string plate = "SE " + to_string(plateNumber) + " CDE";
    
    Car car(color, brand, plate);
    car.setTier(Car::select);
    
    return car;
}

Car CarFactory::registerUberBlack() {
    string color = "black";
    string brand = "tesla";
    
    int plateNumber = rand() % 1000;
    string plate = "TS " + to_string(plateNumber) + " LOL";
    
    Car car(color, brand, plate);
    car.setTier(Car::black);
    
    return car;
}
