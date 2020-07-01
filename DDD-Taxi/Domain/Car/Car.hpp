//
//  Car.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <iostream>
#include "Driver.hpp"
#include "Settings.hpp"
#include "HashFactory.hpp"

typedef long int CarId;

using namespace std;

class Car {
    string color;
    string brand;
    string plate;
    
    CarId uid;
    
    DriverId weakDriverLink;
    Driver * strongDriverLink = nullptr;
    
    void setColor(string color);
    void setBrand(string brand);
    void setPlate(string plate);
    
public:
    enum Tier {
        x,
        xl,
        select,
        black
    };
    
    Car(string color, string brand, string plate);
    
    CarId getUid();
    string getColor();
    string getBrand();
    string getPlate();
    string getDescription();
    Driver * getDriver();
    void setDriver(Driver & driver);
    
    friend class CarFactory;
    friend class CarRepository;
};

#endif /* Car_hpp */
