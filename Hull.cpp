#include "Hull.h"

Hull::Hull(string n = "Default Hull", int w = 0, double s= 0) : AbstractPart(n,w){
    this->_maxWeight = s;
    this->hp = 1000;
}

Hull::~Hull(){
    this->_maxWeight = 0.0;
}
bool Hull::addPartToHull(AbstractPart* part){
    if(_currentWeight+part->getWeight() <= _maxWeight){
        _currentWeight+= part->getWeight();
        return true;
    }else{
        cout << "   " << this->getName() << " has reached it's maximum weight..." << endl;
    }
}

double Hull::getMaxWeight(){
    return this->_maxWeight;
}

int Hull::getHullSpace(){
    return hullSpace;
}

void Hull::repair(int x){
    if (hp < 1000)
    {
        this->hp += x;
        if (hp >= 1000)
        {
            cout << "hull fully repaired" << endl;
            hp = 1000;
        }
    }
    
}

int Hull::getCurrentWeight(){
    return _currentWeight;
}

void Hull::takeDamage(int dmg){
    hp -= dmg;
    cout << _name << " took " << dmg << " damage" << endl;
    if (hp <= 0){
        broken(_name);
    }else cout << _name << " is on " << hp << " hp" << endl;
}

int Hull::getHp(){
    return hp;
}

void Hull::broken(string type){
    cout <<  type << " is broken and needs repair." << endl;
}