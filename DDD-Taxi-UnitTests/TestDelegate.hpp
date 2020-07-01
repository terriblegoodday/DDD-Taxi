//
//  TestDelegate.hpp
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef TestDelegate_hpp
#define TestDelegate_hpp

#include <stdio.h>
#include "UseCase.hpp"

class TestDelegate: public UseCase::UseCaseStateDelegate {
public:
    void didFinishOperation(UseCase *onUseCase) override;
};

#endif /* TestDelegate_hpp */
