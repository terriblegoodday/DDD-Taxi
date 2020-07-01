//
//  RegisterCustomer.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "RegisterCustomer.hpp"

string RegisterCustomer::getDescription() {
    return "RegisterCustomer";
}

RegisterCustomer::RegisterCustomer(CustomerRepository * customerRepository, string firstName, string lastName): customerRepository(customerRepository) {
    this->firstName = firstName;
    this->lastName = lastName;
}

void RegisterCustomer::execute() {
    delegate->inProgress(this);
    try {
        auto customerFactory = CustomerFactory();
        auto customer = customerFactory.registerCustomer(firstName, lastName);
        customerRepository->persist(customer);
        delegate->didFinishOperation(this);
    } catch (domain_error &e) {
        delegate->didFinishWithError(this, e.what());
    }
}
