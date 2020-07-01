//
//  StdPresenter.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "StdPresenter.hpp"

STDPresenter::STDPresenter(CarRepository * carRepository, DriverRepository * driverRepository, CustomerRepository * customerRepository, OrderRepository * orderRepository): Presenter(carRepository, driverRepository, customerRepository, orderRepository) {
    
}

void STDPresenter::start() {
    cout << "not implemented yet" << endl;
}
