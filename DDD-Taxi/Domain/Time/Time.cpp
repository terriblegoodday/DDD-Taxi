//
//  Time.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "Time.hpp"

Time::Time(unsigned int begin, unsigned int end) {
    if (begin <= end) {
        hourBegin = begin % Settings::hoursInDay;
        hourEnd = end % Settings::hoursInDay;
        return;
    }
    throw out_of_range("Incorrect time interval");
}

unsigned int Time::begin() const {
    return hourBegin;
}

unsigned int Time::end() const {
    return hourEnd;
}
