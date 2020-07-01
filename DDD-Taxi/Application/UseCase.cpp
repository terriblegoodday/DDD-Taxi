//
//  UseCase.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "UseCase.hpp"

void UseCase::setUseCaseStateDelegate(UseCaseStateDelegate * delegate) {
    this->delegate = delegate;
}

void UseCase::UseCaseStateDelegate::didFinishOperation(UseCase * onUseCase) {
    cout << "(default protocol) " << onUseCase->getDescription() << ": " << "has finished its operation." << endl;
}

void UseCase::UseCaseStateDelegate::didFinishWithError(UseCase * onUseCase, string reason) {
    cout << "(default protocol) " << onUseCase->getDescription() << ": " << "has an error: " << reason << endl;
}

void UseCase::UseCaseStateDelegate::inProgress(UseCase * onUseCase) {
    cout << "(default protocol) " << onUseCase->getDescription() << ": " << "is in progress." << endl;
}
