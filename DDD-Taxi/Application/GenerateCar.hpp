//
//  GenerateCar.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef GenerateCar_hpp
#define GenerateCar_hpp

#include <stdio.h>
#include <iostream>
#include "UseCase.hpp"
#include "CarRepository.hpp"


using namespace std;

class GenerateCar: public UseCase {
    
public:
    string getDescription() override;
    void execute() override;
    
    GenerateCar();
};

#endif /* GenerateCar_hpp */
