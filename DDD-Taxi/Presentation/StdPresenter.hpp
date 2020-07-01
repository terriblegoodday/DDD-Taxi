//
//  StdPresenter.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef StdPresenter_hpp
#define StdPresenter_hpp

#include <stdio.h>
#include <iostream>
#include "Presenter.hpp"

using namespace std;

class STDPresenter: public Presenter {
public:
    void start() override;
};

#endif /* StdPresenter_hpp */
