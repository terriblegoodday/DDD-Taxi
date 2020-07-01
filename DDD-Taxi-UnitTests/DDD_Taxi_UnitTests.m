//
//  DDD_Taxi_UnitTests.m
//  DDD-Taxi-UnitTests
//
//  Created by Eduard Dzhumagaliev on 6/30/20.
//  Copyright © 2020 Eduard Dzhumagaliev. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "DriverTestMemory.hpp"
#include "CarTestMemory.hpp"
#include "OrderTestMemory.hpp"
#include "CustomerTestMemory.hpp"
#include "OrderTaxi.hpp"
#include "TestDelegate.hpp"
#include "RegisterCustomer.hpp"
#include "Time.hpp"


@interface DDD_Taxi_UnitTests : XCTestCase

@end

@implementation DDD_Taxi_UnitTests

DriverTestMemory driverMemory;
CarTestMemory carMemory;
OrderTestMemory orderMemory;
CustomerTestMemory customerMemory;
TestDelegate testDelegate;


- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testAvailableTime {
    driverMemory.showAllDrivers();
    carMemory.showAllCars();
    orderMemory.showAllOrders();
    customerMemory.showAllCustomers();
}

- (void)testTaxiOrder {
    auto registerAction = RegisterCustomer(&customerMemory, "Eduard", "Dzhumagaliev");
    registerAction.setUseCaseStateDelegate(&testDelegate);
    registerAction.execute();
    Customer customer = registerAction.getCustomer();
    Time time = {17, 19};
    auto orderTaxi = OrderTaxi(&carMemory, &orderMemory, customer, time, Car::Tier::black);
    orderTaxi.setUseCaseStateDelegate(&testDelegate);
    orderTaxi.execute();
    customerMemory.showAllCustomers();
    orderMemory.showAllOrders();
}

@end
