/**
 * @author Rudo Janse Van Resnburg @Dylan Krajnc @Lap Ren Ivan Zhang
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

Spacestation* Spacestation::instance(){
    if(_onlyInstance == 0){
        _onlyInstance = new Spacestation();
    }
    return _onlyInstance;
}

bool Spacestation::attach(Spacecraft* newSpacecraft){
    if(currentLevel == Red) {
        cout << "The Spacestation's danger level is currently at: RED! All Spacestation docking activities have been suspended!" << endl;
        return false;
    }
    _fleet.push_back(newSpacecraft);
    return true;
}

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

bool Spacestation::dockShip(Spacecraft* shipToDock){
    _docked.push_back(shipToDock);
    return true;
}

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

void Spacestation::repairDockedShips(){
    vector<Spacecraft*>::iterator it = _docked.begin();
    while((it != _docked.end())){
        (*it)->repair();
        ++it;
    }
}

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