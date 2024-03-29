/**
 *  @file Comms.cpp
 *  @class Comms
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Comms.h"

/**
 * @param n - The name of the comms.
 */
Comms::Comms(string n) {
    this->_name = n;
    this->_title = "Comms";
}

/**
 * @param s - The string order.
 * @param ship - The ship that order needs to execute on.
 */
void Comms::executeOrder(string s, Spacecraft * ship){
    if(s.at(0) == 'C'){
        // Move ship
    } else{
        this->next->executeOrder(s, ship);
    }
}
