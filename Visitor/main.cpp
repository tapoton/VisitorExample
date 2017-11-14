//
//  main.cpp
//  Visitor
//
//  Created by Anton Tyutin on 14.11.17.
//  Copyright © 2017 AMM. All rights reserved.
//

#include <iostream>

#include "SandRoad.hpp"
#include "RaceCar.hpp"


int main(int argc, const char * argv[]) {
    
    Vehicle *vehicle = new RaceCar;
    Road *road = new SandRoad;
    
    std::cout << road->Accept(vehicle);
    
    return 0;
}
