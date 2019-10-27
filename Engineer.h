/**
 *  @file Engineer.h
 *  @class Engineer
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef ENGINEER_H
#define ENGINEER_H

#include "SpaceCraftCrew.h"
#include "Spacecraft.h"

class Engineer : public SpaceCraftCrew {
public:
    Engineer(string n);
    virtual void executeOrder(string s, Spacecraft * ship);
};

#endif 
