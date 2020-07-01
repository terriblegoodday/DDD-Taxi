//
//  Timetable.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "Timetable.hpp"

Timetable::Timetable(vector<Time> fromTimes) {
    availableHours = TimeVector(hoursPerDay);
    for (auto time: fromTimes) {
        addTime(time);
    }
}

Timetable::Timetable() {
    availableHours = TimeVector(hoursPerDay);
}

vector<bool> Timetable::getVector() {
    return availableHours;
}

void Timetable::addTime(Time time) {
    for (int i = time.hourBegin; i <= time.hourEnd; i++) {
        availableHours[i % hoursPerDay] = true;
    }
}
