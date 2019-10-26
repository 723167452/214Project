#include "Reactor.h"

Reactor::Reactor(string n = "Default Reactor", int w = 0, long e = 0) : AbstractPart(n,w){
    this->_energyProduction = e;
}

Reactor::~Reactor(){

}

long Reactor::getEnergyProduction(){
    return this->_energyProduction;
}

void Reactor::repair(int x){
    this->hp = this->hp + x;
    if(this->hp > this->maxHp){
        this->hp = this->maxHp;
    }
}

void Reactor::takeDamage(int damage){
    this->hp -= damage;
}

int Reactor::getHp(){
    return hp;
}