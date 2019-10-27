/**
 *  @file Reactor.cpp
 *  @class Reactor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "Reactor.h"

/**
 * @param n - name of reactor
 * @param w - weight of reactor
 * @param e - energy production amount
 */
Reactor::Reactor(string n = "Default Reactor", int w = 0, long e = 0) : AbstractPart(n,w){
    this->_energyProduction = e;
}

Reactor::~Reactor(){

}

long Reactor::getEnergyProduction(){
    return this->_energyProduction;
}

/**
 * @param x - amount to incease reactor hp by
 */
void Reactor::repair(int x){
    this->hp = this->hp + x;
    if(this->hp > this->maxHp){
        this->hp = this->maxHp;
    }
}

/**
 * @param dmg - amount to decrease reactor hp by until broken which will call broken()
 */
void Reactor::takeDamage(int dmg){
	hp -= dmg;
	cout << _name << " took " << dmg << " damage" << endl;
	if (hp <= 0){
		broken(_name);
	}else cout << _name << " is on " << hp << " hp" << endl;

    this->notify(this);
}

/**
 * @param type - name of reactor that is broken
 */
void Reactor::broken(string type){
	cout << type << " is broken and needs repair." << endl;
}

int Reactor::getHp(){
    return hp;
}

void Reactor::setHp(int newHp){
    hp = newHp;
}