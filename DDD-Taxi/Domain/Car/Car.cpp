//
//  Car.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "Car.hpp"

string Car::getColor() {
    return color;
}

string Car::getBrand() {
    return brand;
}

string Car::getPlate() {
    return plate;
}

string Car::getDescription() {
    return color + " " + brand + " (" + plate + ")";
}

CarId Car::getUid() {
    return uid;
}

Driver * Car::getDriver() {
    return strongDriverLink;
}

void setDriver(Driver & driver) {
    strongDriverLink = driver;
    weakDriverLink = driver.getUid();
}

void Car::setColor(string color) {
    this->color = color;
    this->color[0] = toupper(color[0]);
}

void Car::setBrand(string brand) {
    this->brand = brand;
    this->brand[0] = toupper(brand[0]);
}

void Car::setPlate(string plate) {
    this->plate = plate;
    this->plate[0] = toupper(plate[0]);
}

Car::Car(string color, string brand, string plate) {
    setColor(color);
    setBrand(brand);
    setPlate(plate);
    this->uid = HashFactory::getHash(color + brand + plate, Settings::hashBoundary);
};
