#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include "SpaceCraftCrew.h"
#include "Spacecraft.h"

using namespace std;

class Navigator : public SpaceCraftCrew {
public:
    Navigator(string n);
    virtual void executeOrder(string s, Spacecraft * ship);
};

#endif 
