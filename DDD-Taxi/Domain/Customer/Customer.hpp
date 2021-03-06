//
//  Customer.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <iostream>
#include "Settings.hpp"
#include "HashFactory.hpp"

typedef long int CustomerId;

using namespace std;

class Customer {
    string firstName;
    string lastName;
    
    CustomerId uid;
    
    double rating;
    unsigned int rateCount;
    
    Customer(string firstName, string lastName);
    
public:
    CustomerId getUid() const;
    string getRating();
    string getDescription();
    
    void addToRating(unsigned int rating);
    
    friend class CustomerFactory;
    
    friend ostream & operator<<(ostream & destination, const Customer & source);
};

#endif /* Customer_hpp */
