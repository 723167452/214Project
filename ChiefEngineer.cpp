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
    if(s.at(0) == 'DF'){
        // Move ship
    } else{
        this->next->executeOrder(s, ship);
    }
}