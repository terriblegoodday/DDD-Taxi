//
//  GenerateCar.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "GenerateCar.hpp"

string GenerateCar::getDescription() {
    return "GenerateCar";
}

void GenerateCar::execute() {
    delegate->inProgress(this);
    delegate->didFinishWithError(this, "not implemented yet");
}

GenerateCar::GenerateCar() {
    
}
