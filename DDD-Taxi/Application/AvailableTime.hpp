//
//  AvailableTime.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef AvailableTime_hpp
#define AvailableTime_hpp

#include <stdio.h>
#include "UseCase.hpp"
#include "Timetable.hpp"
#include "Customer.hpp"
#include "Order.hpp"
#include "OrderRepository.hpp"
#include "OrderAggregate.hpp"

class AvailableTime: public UseCase {
    Timetable * timetable = nullptr;
    OrderRepository * orderRepository = nullptr;
    Customer * customer = nullptr;
    
public:
    string getDescription() override;
    void execute() override;
    
    AvailableTime(OrderRepository * orderRepository,
                  Customer * customer, Timetable * timetable);
};

#endif /* AvailableTime_hpp */
