/**
 * @file Captain.cpp
 * @class Captain
 * @author Aaron Phillip Facoline
 */

#include "Captain.h"

/**
 * @param name - a string that's the name of the captain.
 * @param ship - a Spacecraft pointer, that point to the captains ship.
 */
Captain::Captain(string name, Spacecraft * ship) {
    this->_name = name;
    this->_title = "Captain";
    this->myShip = ship;
    this->myCrew = nullptr;
}

/**
 * @param s - order to be executed.
 */
void Captain::executeOrder(string s) {
    myCrew->executeOrder(s, myShip);
}

/**
 * @param c - crew member being assigned to this captain (of type SpaceCraftCrew *).
 */
void Captain::addCrew(SpaceCraftCrew * c) {
    if(myCrew == nullptr){
        myCrew = c;
    }
    else{
        SpaceCraftCrew * temp = myCrew;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = c;
    }
}

/**
 * @param name - the crew to be removed from this roster.
 */

void Captain::removeCrew(string name) {
    if(myCrew != nullptr){
        SpaceCraftCrew * prev;
        SpaceCraftCrew * temp = myCrew;
        bool found = false;
        if(temp->_name == name){
            found = true;
        }
        while(temp->_name != name){
            prev = temp;
            temp = temp->next;
            if(temp->_name == name){
                found = true;
            }
        }
        if(found) {
            prev->next = temp.next;
            temp->next = nullptr_t;
        }
    }
}

Captain::~Captain() {

}