/**
 * @file Admiral.cpp
 * @class Admiral
 * @author Aaron Phillip Facoline
 */

#include "Admiral.h"

/**
 * @param name - The name of the admiral of the fleet.
 */
Admiral::Admiral(string name) {
    this->_name = name;
    this->_title = "Admiral";
    this->_log = "Admiral's Log\n>>===>>==>><<==<<===<<\n";
    this->_fleatCaptains.clear();
}

void Admiral::moveFleat() {

}

void Admiral::moveShip() {

}

void Admiral::fleatTarget() {

}

void Admiral::shipTarget() {

}

/**
 * @param name - Name of captain.
 * @return a pointer of the specified object(Captain).
 */

Captain Admiral::getCaptain(string name){
    Captain * val = nullptr;
    for(int i = 0; i < _fleatCaptains.size(); i++){
        if(_fleatCaptains.at(i)._name == name){
            val = _fleatCaptains.at(i);
            break;
        }
    }
    return val;
}


/**
 * @param c - Adds the captain under this Admiral
 */
void Admiral::addCaptain(Captain *c) {
    _log = _log + "Recruited Captain " + c->_name + " and their crew.";
    _fleatCaptains.push_back(c);
}

void Admiral::removeCaptain(Captain *c) {

}

void Admiral::addToLog(string x) {

}

Admiral::~Admiral() {
    this->_fleatCaptains.clear();
}