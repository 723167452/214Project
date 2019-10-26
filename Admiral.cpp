/**
 * @file Admiral.cpp
 * @class Admiral
 * @author Aaron Phillip Facoline
 * @author Constantinos Pavlo Andrianatos
 */

#include <iostream>
#include "Admiral.h"
#include "Move.h"
#include "Pewpew.h"

/**
 * @param name - The name of the admiral of the fleet.
 */
Admiral::Admiral(string name) {
    this->_name = name;
    this->_title = "Admiral";
    this->_log = "Admiral's Log\n>>===>>==>><<==<<===<<\n\n";
    this->_fleatCaptains.clear();
    this->_moveShip = new Move();
    this->_shoot = new Pewpew();
}

/**
 * @param order - a string that contains the coordinates to move to eg. "Mx45y22".
 */
void Admiral::moveFleet(string order) {
    for(int i = 0; i < _fleatCaptains.size(); i++){
        _moveShip->execute(_fleatCaptains.at(i),order);
    }

    addToLog("Moved the fleet to " + order);
}

/**
 * @param order - a string that contains the coordinates to move to eg. "Mx45y22".
 */
void Admiral::moveShip(string captainName,string order) {
    _moveShip->execute(getCaptain(captainName),order);
    addToLog("Ordered Captain " + captainName + " to move his ship to " + order);
}


/**
 * @param order - a string that contains the coordinates to fire weapons at eg. "Ax45y22".
 */
void Admiral::fleatTarget(string order) {
    for(int i = 0; i < _fleatCaptains.size(); i++){
        _shoot->execute(_fleatCaptains.at(i),order);
    }
    addToLog("Ordered the fleet to fire on " + order);
}

/**
 * @param order - a string that contains the coordinates to fire weapons at eg. "Ax45y22".
 */
void Admiral::shipTarget(string captainName,string order) {
    _shoot->execute(getCaptain(captainName),order);
    addToLog("Ordered Captain " + captainName + " to fire on " + order);
}

/**
 * @param name - Name of captain.
 * @return a pointer of the specified object(Captain).
 */

Captain * Admiral::getCaptain(string name){
    Captain * val;
    for(int i = 0; i < _fleatCaptains.size(); i++){
        if(_fleatCaptains.at(i)->_name == name){
            val = _fleatCaptains.at(i);
            break;
        }
    }
    return val;
}


/**
 * @param c - Adds the captain under this Admiral
 */
void Admiral::addCaptain(Captain * c) {
    _log = _log + "Recruited Captain " + c->_name + " and their crew.";
    _fleatCaptains.push_back(c);
    addToLog("Welcomed Captain " + c->_name + " to the fleet");
}

/**
 * @param name - name of the captain to remove from the fleet.
 */
void Admiral::removeCaptain(string name) {
    vector<Captain *>::iterator it;
    it = _fleatCaptains.begin();
    int i;
    for(i = 0; i < _fleatCaptains.size(); i++){
        if(_fleatCaptains.at(i)->_name == name){
            break;
        }
    }
    _fleatCaptains.erase(it + i);
    addToLog("Captain " + name + " retired from fleet");
}

/**
 * @param x - adds the string x to the Admiral's log.
 */
void Admiral::addToLog(string x) {
    this->_log = this->_log + x + "\n";
}


Admiral::~Admiral() {
    cout<<"Fleet Disbanded\n";
    this->_fleatCaptains.clear();
}

void Admiral::printLog() {
    cout<<this->_log;
}

CaptainLogMemento* Admiral::createMemento(){
    CaptainLogMemento* m = new CaptainLogMemento();
    m->setState(_log);
    return m;
}

void Admiral::setMemento(CaptainLogMemento* m){
    _log = m->getState();
}
