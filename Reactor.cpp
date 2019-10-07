#include "Reactor.h"

Reactor::Reactor(string n = "Default Reactor", int w = 0, long e = 0) : AbstractPart(n,w){
    this->_energyProduction = e;
}

Reactor::~Reactor(){

}

long Reactor::getEnergyProduction(){
    return this->_energyProduction;
}