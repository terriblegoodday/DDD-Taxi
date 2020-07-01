//
//  main.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include <iostream>
#include "CarMemory.hpp"
#include "OrderMemory.hpp"
#include "DriverMemory.hpp"
#include "CustomerMemory.hpp"
#include "StdPresenter.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    CarMemory carMemory;
    OrderMemory orderMemory;
    DriverMemory driverMemory;
    CustomerMemory customerMemory;
    
    STDPresenter presenter(&carMemory, &driverMemory, &customerMemory, &orderMemory);
    
    presenter.start();
    
    return 0;
}
