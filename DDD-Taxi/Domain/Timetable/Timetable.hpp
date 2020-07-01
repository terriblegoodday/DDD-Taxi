//
//  Timetable.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef Timetable_hpp
#define Timetable_hpp

#include <stdio.h>
#include <vector>
#include "Time.hpp"

using namespace std;

typedef vector<bool> TimeVector;

class Timetable {
    const int hoursPerDay = 24;
    
    TimeVector availableHours;
    
public:
    Timetable();
    Timetable(vector<Time> fromTimes);
    
    vector<bool> getVector();
    void addTime(Time time);
};

#endif /* Timetable_hpp */
