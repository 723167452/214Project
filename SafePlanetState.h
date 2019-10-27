/**
 *  @file SafePlanetState.cpp
 *  @class SafePlanetState
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef SAFESTATE_H
#define SAFESTATE_H
#include "SafePlanetState.h"
#include "PlanetState.h"
#include "ModeratePlanetState.h"
#include "HostilePlanetState.h"
using namespace std;
class SafePlanetState : public PlanetState{
    public:
        virtual void changeState(Planet* c);
        virtual string getSafetyLevel();
};
#endif