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
    _fleet.push_back(newSpacecraft);
    return true;
}

bool Spacestation::detach(Spacecraft* unnecessarySpacecraft){
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


