/**
 *  @file Doctor.cpp
 *  @class Doctor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Doctor.h"

/**
 * @param n - The name of the doctor.
 */

Doctor::Doctor(string n) {
    this->_name = n;
    this->_title = "Doctor";
}

/**
 * @param s - The string order.
 * @param ship - The ship that order needs to execute on.
 */
void Doctor::executeOrder(string s, Spacecraft * ship){
    if(s.at(0) == 'D'){
        // Move ship
    } else{
        this->next->executeOrder(s, ship);
    }
}
