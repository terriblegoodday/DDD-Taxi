//
//  TestDelegate.cpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "TestDelegate.hpp"

void TestDelegate::didFinishOperation(UseCase * useCase) {
    cout << "XCTest did finish operation " << useCase->getDescription() << endl;
}
