//
//  HashFactory.cpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 7/1/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#include "HashFactory.hpp"

int HashFactory::getHash(string stringToHash, int hashBound) {
    int hashValue = 0;
    for(char character: stringToHash) {
        hashValue = (hashValue + character) % hashBound;
    };
    return hashValue;
}
