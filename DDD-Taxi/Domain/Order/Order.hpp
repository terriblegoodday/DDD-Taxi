//
//  Order.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef Order_hpp
#define Order_hpp

#include <stdio.h>
#include "Time.hpp"
#include "Car.hpp"
#include "Customer.hpp"
#include "HashFactory.hpp"
#include "Settings.hpp"


typedef long int OrderId;

class Order {
    Time time;
    CarId weakCarLink;
    Car strongCarLink;
    
    OrderId uid;
    
    CustomerId weakCustomerLink;
    
    Order(Time time, Car & car, Customer & customer);
    void setUid(OrderId uid);
    
public:
    Time getObjTime();
    string getTime() const;
    string getCar();
    string getCustomer();
    string getDriver();
    
    CustomerId getCustomerUid() const;
    OrderId getUid() const;
    
    friend class OrderFactory;
    friend ostream & operator<<(ostream & destination, const Order & source);
};

#endif /* Order_hpp */
