/**
 *  @file HostilePlanetState.h
 *  @class HostilePlanetState
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef HOSTILEPLANETSTATE_H
#define HOSTILEPLANETSTATE_H
#include "SafePlanetState.h"
#include "PlanetState.h"
#include "ModeratePlanetState.h"
using namespace std;
class HostilePlanetState : public PlanetState{
    public:
        virtual void changeState(Planet* c);
        virtual string getSafetyLevel();
};
#endif