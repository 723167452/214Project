/**
 *  @file Engine.cpp
 *  @class Engine
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Engine.h"

/**
 * @return a integer value that represents the total amount of thrust the engine can produce.
 */
int Engine::getThrust() const {
    return thrust;
}


/**
 * @return a integer value that represents the total power consumption for the Engine.
 */
int Engine::getPowerConsumption() const {
    return powerConsumption;
}


/**
 * @return a integer value that represents the current amount of HitPoints the engine has.
 */
int Engine::getHp() const {
    return hp;
}

/**
 * @return a boolean value that represents if the engine is currently operational.
 */
bool Engine::isOperational() {
    return this->status;
}

/**
 * @param x - a integer that represents the amount of HitPoints to restore to the Engine during the repair.
 */
void Engine::repair(int x) {
    this->hp = this->hp + x;
    if(this->hp > this->maxHp){
        this->hp = this->maxHp;
    }
    if(this->hp > 0){
        this->status = true;
    }
}

/**
 * @param x - a integer that represents the amount of damage done to the engine during an attack.
 */
void Engine::takeDamage(int x) {
    this->hp = this->hp - x;
    if(this->hp < 0){
        this->hp = 0;
        broken(_name);
    }
    if(this->hp == 0){
        this->status = false;
    }

    this->notify(this);
}

Engine::Engine(){

}

/**
 * @param type - name of engine that is broken
 */
void Engine::broken(string type){
    cout << type << " is broken and needs repair." << endl;
}
Engine::~Engine() {

}

int Engine::getHp(){
    return hp;
}

void Engine::setHp(int newHp){
    hp = newHp;
}
