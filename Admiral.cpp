/**
 * @file Admiral.cpp
 * @class Admiral
 * @author Aaron Phillip Facoline
 */

#include "Admiral.h"

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

void Admiral::addCaptain(Captain *c) {
    _log = _log + "Recruited Captain " + c->_name + " and their crew.";
    _fleatCaptains.push_back(c);
}

void Admiral::removeCaptain(Captain *c) {

}

void Admiral::addToLog() {

}

Admiral::~Admiral() {
    this->_fleatCaptains.clear();
}

