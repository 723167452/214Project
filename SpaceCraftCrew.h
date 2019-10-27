/**
 *  @file SpaceCraftCrew.h
 *  @class SpaceCraftCrew
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#ifndef INC_214PROJECT_SPACECRAFTCREW_H
#define INC_214PROJECT_SPACECRAFTCREW_H


#include "Crew.h"
#include "Spacecraft.h"

class SpaceCraftCrew : public Crew {
public:
    SpaceCraftCrew * next = nullptr;
    virtual void executeOrder(string s, Spacecraft * ship) = 0;
};


#endif //INC_214PROJECT_SPACECRAFTCREW_H
