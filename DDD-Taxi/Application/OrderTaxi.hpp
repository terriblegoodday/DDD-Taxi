//
//  OrderTaxi.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef OrderTaxi_hpp
#define OrderTaxi_hpp

#include <stdio.h>
#include <iostream>
#include "UseCase.hpp"
#include "Timetable.hpp"
#include "OrderRepository.hpp"
#include "OrderFactory.hpp"
#include "Customer.hpp"
#include "Car.hpp"
#include "CarRepository.hpp"
#include "CustomerRepository.hpp"

using namespace std;

class OrderTaxi: public UseCase {
    Customer customer;
    Car::Tier carTier;
    Time time;
    CarRepository * carRepository = nullptr;
    OrderRepository * orderRepository = nullptr;
    CustomerRepository * customerRepository = nullptr;
    Car * car = nullptr;
    
public:
    ~OrderTaxi();
    
    string getDescription() override;
    void execute() override;
    
    OrderTaxi(CarRepository * carRepository, OrderRepository * orderRepository, CustomerRepository * customerRepository, Customer & customer, Time time, Car::Tier tier);
};

#endif /* OrderTaxi_hpp */
