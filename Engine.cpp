//
// Created by aaron on 2019/10/08.
//

#include "Engine.h"

int Engine::getThrust() const {
    return thrust;
}

int Engine::getPowerConsumption() const {
    return powerConsumption;
}

int Engine::getHp() const {
    return hp;
}

bool Engine::isStatus() const {
    return status;
}

bool Engine::isOperational() {
    return this->status;
}

void Engine::repair(int x) {
    this->hp = this->hp + x;
    if(this->hp > this->maxHp){
        this->hp = this->maxHp;
    }
    if(this->hp > 0){
        this->status = true;
    }
}

void Engine::hit(int x) {
    this->hp = this->hp - x;
    if(this->hp < 0){
        this->hp = 0;
    }
    if(this->hp == 0){
        this->status = false;
    }
}

Engine::Engine(){

}

Engine::~Engine() {

}
