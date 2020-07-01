//
//  Driver.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef Driver_hpp
#define Driver_hpp

#include <stdio.h>
#include <iostream>
#include "HashFactory.hpp"
#include "Settings.hpp"

typedef long int DriverId;

using namespace std;

class Driver {
    string firstName;
    string lastName;
    
    DriverId uid;
    
    int rating;
    unsigned int rateCount;
    
    Driver(string firstName, string lastName);
    
public:
    string getDescription();
    DriverId getUid() const;
    
    friend class DriverFactory;
};

#endif /* Driver_hpp */
