/**
 * @file Captain.cpp
 * @class Captain
 * @author Aaron Phillip Facoline
 */

#include "Captain.h"

Captain::Captain(string name, Spacecraft * ship) {
    this->_name = name;
    this->_title = "Captain";
    this->myShip = ship;
    this->myCrew = nullptr;
}

void Captain::executeOrder(string s) {

}

void Captain::addCrew(Crew *) {

}

void Captain::removeCrew(string name) {

}

Captain::~Captain() {

}


