/**
 *  @file Fighter.cpp
 *  @class Fighter
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
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
        ship->attackTarget(s);
    } else{
        this->next->executeOrder(s, ship);
    }
}
