#ifndef PLANETSTATE_H
#define PLANETSTATE_H
#include <string>
#include "Planet.h"
using namespace std;
//abstract state
class PlanetState{
    protected:
        enum Safety         { hostile = 0   , moderate = 1 ,    safe = 2} _danger;
    public:
        virtual void changeState(Planet*) = 0;
        virtual string getSafetyLevel()= 0;
};
#endif