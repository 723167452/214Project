/**
 *  @file Engineer.cpp
 *  @class Engineer
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Engineer.h"

/**
 * @param n - The name of the engineer.
 */

Engineer::Engineer(string n) {
    this->_name = n;
    this->_title = "Engineer";
}

/**
 * @param s - The string order.
 * @param ship - The ship that order needs to execute on.
 */
void Engineer::executeOrder(string s, Spacecraft * ship){
    if(s.at(0) == 'F'){
        // Move ship
    } else{
        this->next->executeOrder(s, ship);
    }
}
