/**
 * @file Navigator.cpp
 * @class Navigator
 * @author Constantinos Pavlo Andrianatos
 */

#include "Navigator.h"

/**
 * @param n - The name of the navigator.
 */
Navigator::Navigator(string n) {
    this->_name = n;
    this->_title = "Navigator";
}

/**
 * @param s - The string order.
 * @param ship - The ship that order needs to execute on.
 */
void Navigator::executeOrder(string s, Spacecraft * ship){
    if(s.at(0) == 'M'){
        // Move ship
    } else{
        this->next->executeOrder(s, ship);
    }
}
