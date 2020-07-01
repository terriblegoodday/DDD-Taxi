//
//  RegisterCustomer.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef RegisterCustomer_hpp
#define RegisterCustomer_hpp

#include <stdio.h>
#include <iostream>
#include "Customer.hpp"
#include "UseCase.hpp"
#include "CustomerRepository.hpp"
#include "CustomerFactory.hpp"

class RegisterCustomer: public UseCase {
    Customer getCustomer();
    string firstName;
    string lastName;
    
    CustomerRepository * customerRepository;
    
public:
    string getDescription() override;
    void execute() override;
    
    RegisterCustomer(CustomerRepository * customerRepository, string firstName, string lastName);
};

#endif /* RegisterCustomer_hpp */
