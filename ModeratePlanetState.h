#ifndef MODERATEPLANETSTATE_H
#define MODERATEPLANETSTATE_H
#include "SafePlanetState.h"
#include "PlanetState.h"
#include "ModeratePlanetState.h"
#include "Planet.h"
using namespace std;
class ModeratePlanetState : public PlanetState{
    public:
        virtual void changeState(Planet* c);
        virtual string getSafetyLevel();
};
#endif