/**
 *  @file ChiefEngineer.h
 *  @class ChiefEngineer
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef CHIEFENGINEER_H
#define CHIEFENGINEER_H

#include "AbstractPart.h"
#include "SpaceCraftCrew.h"
#include "Spacecraft.h"
#include <vector>

class ChiefEngineer : public SpaceCraftCrew {
public:
    vector<AbstractPart *> parts;
    ChiefEngineer(string n);
    virtual void executeOrder(string s, Spacecraft * ship);
    void partHpUpdate(AbstractPart* p);
    void addPart(AbstractPart* p);
};

#endif 
