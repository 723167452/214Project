#include "ModeratePlanetState.h"

void ModeratePlanetState::changeState(Planet* c){
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

string ModeratePlanetState::getSafetyLevel(){
    return "Moderate";
}