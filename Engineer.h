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
