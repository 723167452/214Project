#ifndef CHIEFENGINEER_H
#define CHIEFENGINEER_H

#include "SpaceCraftCrew.h"
#include "Spacecraft.h"

class ChiefEngineer : public SpaceCraftCrew {
public:
    ChiefEngineer(string n);
    virtual void executeOrder(string s, Spacecraft * ship);
};

#endif 
