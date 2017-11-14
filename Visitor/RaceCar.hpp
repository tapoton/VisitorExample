//
//  RaceCar.hpp
//  Visitor
//
//  Created by Anton Tyutin on 14.11.17.
//  Copyright © 2017 AMM. All rights reserved.
//

#ifndef RaceCar_hpp
#define RaceCar_hpp

#include "Vehicle.hpp"

class RaceCar: public Vehicle {
    
public:
    
    int visit(SandRoad *road) {
        
        return 21;
    }
};

#endif /* RaceCar_hpp */
