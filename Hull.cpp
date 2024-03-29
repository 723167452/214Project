/**
 *  @file Hull.cpp
 *  @class Hull
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Hull.h"

/**
 * @param n - name of hull
 * @param w - weight of the hull
 * @param s - max weight of hull
 */
Hull::Hull(string n = "Default Hull", int w = 0, double s= 0) : AbstractPart(n,w){
    this->_currentWeight = w;
    this->_maxWeight = s;
    this->hp = 1000;
}

Hull::~Hull(){
    this->_maxWeight = 0.0;
}

/**
 * @param part - abstract part to be added to the hull's total weight
 * 
 * accumalate the total weight of the hull of all its parts added
 */
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

/**
 * @param x - amount of health to repair hull by
 */
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

/**
 * @param dmg - amount of health to be deducted from the hull's current health point
 */
void Hull::takeDamage(int dmg){
    hp -= dmg;
    cout << _name << " took " << dmg << " damage" << endl;
    if (hp <= 0){
        broken(_name);
    }else cout << _name << " is on " << hp << " hp" << endl;

    this->notify(this);
}

int Hull::getHp(){
    return hp;
}

/**
 * @param type - name of hull that is broken
 */
void Hull::broken(string type){
    cout <<  type << " is broken and needs repair." << endl;
}

void Hull::setHp(int newHp){
    hp = newHp;
}