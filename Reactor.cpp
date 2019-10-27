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

void Reactor::takeDamage(int dmg){
	hp -= dmg;
	cout << _name << " took " << dmg << " damage" << endl;
	if (hp <= 0){
		broken(_name);
	}else cout << _name << " is on " << hp << " hp" << endl;

    this->notify(this);
}

void Reactor::broken(string type){
	cout << type << " is broken and needs repair." << endl;
}

int Reactor::getHp(){
    return hp;
}

void Reactor::setHp(int newHp){
    hp = newHp;
}