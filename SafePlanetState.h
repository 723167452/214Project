#ifndef SAFESTATE_H
#define SAFESTATE_H
#include "SafePlanetState.h"
#include "PlanetState.h"
#include "ModeratePlanetState.h"
using namespace std;
class SafePlanetState : public PlanetState{
    public:
        virtual void changeState(Planet* c);
        virtual string getSafetyLevel();
};
#endif