/**
 *  @file HostilePlanetState.cpp
 *  @class HostilePlanetState
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "HostilePlanetState.h"

/**
 * @param c - planet object
 * change state of planet
 */
void HostilePlanetState::changeState(Planet *c){
    int safety = c->getSafetyQuotient();
    if(safety >= 2){
        c->setState(new SafePlanetState());
        //_danger = Safety::safe;
    }else if(safety == 1){
        c->setState(new ModeratePlanetState());
        //_danger = Safety::moderate;
    }else{
        c->setState(new HostilePlanetState());
        //_danger = Safety::hostile;
    }
}

string HostilePlanetState::getSafetyLevel(){
    return "Hostile";    
}
