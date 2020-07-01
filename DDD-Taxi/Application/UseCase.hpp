//
//  UseCase.hpp
//  DDD-Taxi
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef UseCase_hpp
#define UseCase_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class UseCase {
    
public:
    class UseCaseStateDelegate {
    public:
        
        // This protocol also has default implementations
        virtual void didFinishOperation(UseCase * onUseCase);
        virtual void didFinishWithError(UseCase * onUseCase, string reason);
        virtual void inProgress(UseCase * onUseCase);
    };
    
public:
    void setUseCaseStateDelegate(UseCaseStateDelegate * delegate);
    UseCaseStateDelegate * delegate = nullptr;
    
    
public:
    
    virtual string getDescription() = 0;
    virtual void execute() = 0;

};

#endif /* UseCase_hpp */
