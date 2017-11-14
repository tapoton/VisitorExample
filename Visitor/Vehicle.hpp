//
//  Vehicle.hpp
//  Visitor
//
//  Created by Anton Tyutin on 14.11.17.
//  Copyright © 2017 AMM. All rights reserved.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp


class SandRoad;

class Vehicle {
    
public:
    
    virtual int visit(SandRoad *road) = 0;
};


#endif /* Vehicle_hpp */
