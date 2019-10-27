/**
 *  @file Comms.h
 *  @class Comms
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef COMMS_H
#define COMMS_H

#include "SpaceCraftCrew.h"
#include "Spacecraft.h"

class Comms : public SpaceCraftCrew {
public:
    Comms(string n);
    virtual void executeOrder(string s, Spacecraft * ship);
};

#endif 
