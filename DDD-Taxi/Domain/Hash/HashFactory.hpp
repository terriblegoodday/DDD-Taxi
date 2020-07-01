//
//  HashFactory.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef HashFactory_hpp
#define HashFactory_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

namespace HashFactory {
    int getHash(string stringToHash, int hashBound=1024);
};

#endif /* HashFactory_hpp */
