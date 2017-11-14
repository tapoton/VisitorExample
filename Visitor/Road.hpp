//
//  Road.hpp
//  Visitor
//
//  Created by Anton Tyutin on 14.11.17.
//  Copyright © 2017 AMM. All rights reserved.
//

#ifndef Road_hpp
#define Road_hpp

class Vehicle;

class Road {
    
public:
    virtual int Accept(Vehicle *vehicle) = 0;
};

#endif /* Road_hpp */
