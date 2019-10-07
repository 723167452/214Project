#include "Reactor.h"

Reactor::Reactor(string n = "Default Reactor", int w = 0, int e = 0) : AbstractPart(n,w){
    this->_energyProduction = e;
}

int Reactor::getEnergyProduction(){
    return this->_energyProduction;
}