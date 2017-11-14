//
//  SandRoad.hpp
//  Visitor
//
//  Created by Anton Tyutin on 14.11.17.
//  Copyright © 2017 AMM. All rights reserved.
//

#ifndef SandRoad_hpp
#define SandRoad_hpp

#include "Road.hpp"
#include "Vehicle.hpp"

class SandRoad: public Road {
    
public:
    int Accept(Vehicle *vehicle) {
        
        int time = vehicle->visit(this);
        
        return time * 2;
    }
};

#endif /* SandRoad_hpp */
