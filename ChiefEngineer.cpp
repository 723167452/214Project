/**
 * @file ChiefEngineer.cpp
 * @class ChiefEngineer
 * @author Constantinos Pavlo Andrianatos
 */

#include "ChiefEngineer.h"

/**
 * @param n - The name of the chief engineer.
 */

ChiefEngineer::ChiefEngineer(string n) {
    this->_name = n;
    this->_title = "Chief Engineer";
}

/**
 * @param s - The string order.
 * @param ship - The ship that order needs to execute on.
 */
void ChiefEngineer::executeOrder(string s, Spacecraft * ship){
    if(s.at(0) == 'D'){
        // Move ship
    } else{
        this->next->executeOrder(s, ship);
    }
}

/**
 * @param p - The abstract part that gets sent to the chief engineer to check hp.
 */
void ChiefEngineer::partHpUpdate(AbstractPart* p){
    bool found = false;
    for(AbstractPart* part : parts){
        if(!parts.empty && part == p){
            found = true;
            part->setHp(p->getHp());
        }
    }

    if(found == true){
        parts.push_back(p);
    }

    if(p->getHp() <= 0){
        cout << p->getName() << " is broken, fix..." << endl;
    }
}

/**
 * @param p - The abstract part that gets sent to the chief engineer to add to perts vector.
 */
void ChiefEngineer::addPart(AbstractPart* p){
    parts.push_back(p);
}