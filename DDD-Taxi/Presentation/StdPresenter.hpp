//
//  StdPresenter.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef StdPresenter_hpp
#define StdPresenter_hpp

#include <stdio.h>
#include <iostream>
#include "Presenter.hpp"
#include "CustomerFactory.hpp"
#include "RegisterCustomer.hpp"
#include "OrderTaxi.hpp"
#include "Time.hpp"

using namespace std;

class STDPresenter: public Presenter, public UseCase::UseCaseStateDelegate {
    
public:
    void start() override;
    
    STDPresenter(CarRepository * carRepository, DriverRepository * driverRepository, CustomerRepository * customerRepository, OrderRepository * orderRepository);
};

#endif /* StdPresenter_hpp */
