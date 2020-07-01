//
//  Presenter.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef Presenter_h
#define Presenter_h

#include "CarRepository.hpp"
#include "DriverRepository.hpp"
#include "CustomerRepository.hpp"
#include "OrderRepository.hpp"

class Presenter {
protected:
    CarRepository * carRepository;
    DriverRepository * driverRepository;
    CustomerRepository * customerRepository;
    OrderRepository * orderRepository;
    
public:
    virtual void start() = 0;
    
    Presenter(CarRepository * carRepository, DriverRepository * driverRepository, CustomerRepository * customerRepository, OrderRepository * orderRepository): carRepository(carRepository), driverRepository(driverRepository), customerRepository(customerRepository), orderRepository(orderRepository) {};
};

#endif /* Presenter_h */
