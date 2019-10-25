#include "Planet.h"

Planet::Planet(string name, bool inhabited, double ores, double oil, double victuals,Environment landscape, PlanetType planetType, vector<Critters *> wildlife)
{
    this->_planetName               = name;
    this->_ores                     = ores;
    this->_oil                      = oil;
    this->_victuals                 = victuals;
    //this->_danger                   = dangerLevel;
    this->_landscape                = landscape;
    this->_inhabited                = (this->_type == PlanetType::solid) ? inhabited : false;
    this->_type                     = planetType;
    this->_terrestrialCritters      = wildlife;
    this->state                     = new HostilePlanetState();
}

Planet::~Planet(){

}

int Planet::getSafetyQuotient(){
    return _landscape * _nature; 
}

void Planet::setState(PlanetState* s){
    if(this->state != NULL) delete this->state;
    this->state = s;
}

string Planet::safetyLevel(){
    return this->state->getSafetyLevel();
}

bool Planet::inhabit()
{
    if (this->state->getSafetyLevel() == "Safe" && !_inhabited && this->_type == PlanetType::solid)
    {
        _inhabited = true;
        return true;
    }
    return false;
}

void Planet::tameWildlife(){
    switch(this->_nature){
        case Wildlife::untamed :
            _nature = Wildlife::moderate;
            break;       
        case Wildlife::moderate :
            _nature = Wildlife::tame;
            break;
        case Wildlife::tame :
            _nature = Wildlife::tame;
            break;
    }
}

void Planet::change(){
    this->state->changeState(this);
}

void Planet::terraform(){
    switch(this->_landscape){
        case Environment::Barren :
            this->_landscape = Environment::Sparse;
            break;
        case Environment::Sparse :
            this->_landscape = Environment::Dense;
            break;
        case Environment::Dense :
            this->_landscape = Environment::Dense;
            break;
    }
}

double Planet::oreOutput(){
    return _ores * _landscape; 
}

double Planet::oilOutput(){
    return _oil * _landscape;
}

double Planet::victualOutput(){
    return _victuals * _landscape;
}

