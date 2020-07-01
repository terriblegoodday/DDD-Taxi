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
        Customer customer = customerRepository->retrieveOrRegister(firstName, lastName);
        this->customer = new Customer(customer);
        delegate->didFinishOperation(this);
    } catch (domain_error &e) {
        delegate->didFinishWithError(this, e.what());
    }
}

Customer RegisterCustomer::getCustomer() {
    if (customer != nullptr) return *customer;
    throw logic_error("Did not execute the Use Case before trying to get the Customer.");
}

RegisterCustomer::~RegisterCustomer() {
    delete customer;
}
