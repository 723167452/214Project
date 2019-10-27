/**
 *  @file Navigator.h
 *  @class Navigator
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include "SpaceCraftCrew.h"
#include "Spacecraft.h"

using namespace std;

class Coordinate;

class Navigator : public SpaceCraftCrew {
public:
    Navigator(string n);
    virtual void executeOrder(string s, Spacecraft * ship);
};

#endif 
