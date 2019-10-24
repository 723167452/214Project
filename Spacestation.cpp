/**
 * @author Rudo Janse Van Resnburg @Dylan Krajnc
 */

#include "Spacestation.h"

Spacestation* Spacestation::_onlyInstance = 0;

Spacestation::Spacestation() {
    this->_weight = 100000;//big number 
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

void Spacestation::setCurrentLevelGreen() {
    currentLevel = Green;
}

void Spacestation::setCurrentLevelYellow() {
    currentLevel = Yellow;
}

void Spacestation::setCurrentLevelRed() {
    currentLevel = Red;
}