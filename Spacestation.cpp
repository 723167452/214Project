#include "Spacestation.h"

Spacestation* Spacestation::_onlyInstance = 0;

Spacestation* Spacestation::instance(){
    if(_onlyInstance == 0){
        _onlyInstance = new Spacestation();
    }
    return _onlyInstance;
}