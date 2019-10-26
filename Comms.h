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
