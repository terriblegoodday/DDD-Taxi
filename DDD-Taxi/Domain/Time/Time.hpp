//
//  Time.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <stdexcept>
#include "Settings.hpp"

using namespace std;

class Time {
    unsigned int hourBegin;
    unsigned int hourEnd;
    
public:
    unsigned int begin() const;
    unsigned int end() const;
    Time(unsigned int hourBegin, unsigned int hourEnd);
};

#endif /* Time_hpp */
