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
    cout << "Welcome to the Taxi aggregator 🚕🚨" << endl;
    while (true) {
        cout << "Please introduce youself: ";
        string firstName, lastName;
        cin >> firstName >> lastName;
        RegisterCustomer registerCustomer(customerRepository, firstName, lastName);
        registerCustomer.execute();
        auto newCustomer = registerCustomer.getCustomer();
        cout << "Which type of Taxi would you like to order?" << endl;
        cout << "0. UberX" << endl;
        cout << "1. UberXL" << endl;
        cout << "2. UberSelect" << endl;
        cout << "3. UberBLACK" << endl;
        int choice;
        cin >> choice;
        auto tier = Car::Tier(choice);
        int hbegin = 0;
        int hend = 0;
        cout << "Time of the trip? (begin)" << endl;
        cin >> hbegin;
        cout << "Time of the trip? (end)" << endl;
        cin >> hend;
        try {
            Time tripTime(hbegin, hend);
            auto orderTaxi = OrderTaxi(carRepository, orderRepository, customerRepository,  newCustomer, tripTime, tier);
            orderTaxi.execute();
            cout << "Have a nice trip" << endl;
        } catch (out_of_range & e) {
            cout << e.what() << endl;
            continue;
        }
        

    }
    
}
