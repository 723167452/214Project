#include "Planet.h"

Planet::Planet(string name, bool inhabitable, bool inhabited,double ores, double oil, double victuals, Safety dangerLevel, PlanetType planetType, vector<Critters*> wildlife ){
    this->_planetName = name;
    this->_inhabitable = inhabitable;
    this->_ores = ores;
    this->_oil = oil;
    this->_victuals = victuals;
    this->_inhabited = (this->_inhabitable) ? inhabited : false;
    this->_danger = dangerLevel;
    this->_type = planetType;
    this->_wildLife = wildlife;

}

Planet::~Planet(){

}

bool Planet::inhabit(){
    if(this->_danger == Safety::safe && !_inhabited && _inhabitable){
        _inhabited = true;
        return true;
    }
    return false;
}

