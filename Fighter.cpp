/**
 * @file Fighter.cpp
 * @class Fighter
 * @author Constantinos Pavlo Andrianatos
 */

#include "Fighter.h"

/**
 * @param n - The name of the fighter.
 */
Fighter::Fighter(string n) {
    this->_name = n;
    this->_title = "Fighter";
}

/**
 * @param s - The string order.
 * @param ship - The ship that order needs to execute on.
 */
void Fighter::executeOrder(string s, Spacecraft * ship){
    if(s.at(0) == 'A'){
        ship->attack(s);
    } else{
        this->next->executeOrder(s, ship);
    }
}
