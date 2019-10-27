/**
 *  @file Spacestation.cpp
 *  @class Spacestation
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Spacestation.h"

//parts to be constructed onto spacestation
#include "LargeHull.h"

#include "Bridge.h"
#include "MedBay.h"
#include "SleepingQuarter.h"

#include "LargeReactor.h"

#include "FasterThanLightDrive.h"
#include "SubLightSpeedEngines.h"

#include "LaserTurrent.h"
#include "MissileLauncher.h"
#include "FlakCannon.h"

Spacestation* Spacestation::_onlyInstance = 0;


/**
 * Create and build the spacestation with different type of parts
 */
Spacestation::Spacestation() {
    this->setName("Fleet Command");

    this->addHull(new LargeHull(true));
    this->addRoom(new Bridge(true, true));
    this->addRoom(new MedBay(50, true));
    this->addRoom(new MedBay(50, true));
    this->addRoom(new SleepingQuarter(100, true, true));
    this->addRoom(new SleepingQuarter(100, true, true));
    this->addRoom(new SleepingQuarter(100, true, true));
    this->addReactor(new LargeReactor(true));
    this->addReactor(new LargeReactor(true));
    this->addEngine(new FasterThanLightDrive(0, 100));
    this->addEngine(new SubLightSpeedEngines(0, 50));
    this->addWeapon(new FlakCannon());
    this->addWeapon(new FlakCannon());
    this->addWeapon(new LaserTurrent());
    this->addWeapon(new LaserTurrent());
    this->addWeapon(new MissileLauncher());
    this->addWeapon(new MissileLauncher());
}

Spacestation::~Spacestation(){

}

/**
 * return instance of spacestation if created else create a new spacestation
 */
Spacestation* Spacestation::instance(){
    if(_onlyInstance == 0){
        _onlyInstance = new Spacestation();
    }
    return _onlyInstance;
}

/**
 * @param newSpacecraft - spacecraft object to be added to fleet vector
 */
bool Spacestation::attach(Spacecraft* newSpacecraft){
    if(currentLevel == Red) {
        cout << "The Spacestation's danger level is currently at: RED! All Spacestation docking activities have been suspended!" << endl;
        return false;
    }
    _fleet.push_back(newSpacecraft);
    return true;
}

/**
 * @param unnecessarySpacecraft - spacecraft to be removed from fleet vector
 */
bool Spacestation::detach(Spacecraft* unnecessarySpacecraft){
    if(currentLevel == Red) {
        cout << "The Spacestation's danger level is currently at: RED! All Spacestation undocking activities have been suspended!" << endl;
        return false;
    }

    bool found = false;
    vector<Spacecraft*>::iterator it = _fleet.begin();
    while((it != _fleet.end()) && (!found)){
        if(*it == unnecessarySpacecraft){
            found = true;
            _fleet.erase(it);
        }
        ++it;
    }
    return found;
}

/**
 * @param shipToDock - spacecraft object to be added to _docked vector
 */
bool Spacestation::dockShip(Spacecraft* shipToDock){
    _docked.push_back(shipToDock);
    return true;
}

/**
 * @param shipToUndock - spacecraft object to be removed from _docked vector
 */
bool Spacestation::undockShip(Spacecraft* shipToUndock){
    bool found = false;
    vector<Spacecraft*>::iterator it = _docked.begin();
    while((it != _docked.end()) && (!found)){
        if(*it == shipToUndock){
            found = true;
            _docked.erase(it);
        }
        ++it;
    }
    return found;
}

/**
 * loop through _dock vector and repair all spacecraft inside
 */
void Spacestation::repairDockedShips(){
    vector<Spacecraft*>::iterator it = _docked.begin();
    while((it != _docked.end())){
        (*it)->repair();
        ++it;
    }
}

/**
 * loop through _dock vector and resupply all spacecraft inside
 */
void Spacestation::resupplyDockedShips() {
     vector<Spacecraft*>::iterator it = _docked.begin();
     while((it != _docked.end())){
        (*it)->resupply();
        ++it;
    }
}

void Spacestation::setCurrentLevelGreen() {
    currentLevel = Green;
}

void Spacestation::setCurrentLevelYellow() {
    currentLevel = Yellow;
}

void Spacestation::setCurrentLevelRed() {
    currentLevel = Red;
}