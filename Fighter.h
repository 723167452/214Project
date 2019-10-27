/**
 *  @file Fighter.h
 *  @class Fighter
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef FIGHTER_H
#define FIGHTER_H

#include "SpaceCraftCrew.h"
#include "Spacecraft.h"

class Fighter : public SpaceCraftCrew {
public:
    Fighter(string n);
    virtual void executeOrder(string s, Spacecraft * ship);
};

#endif 
