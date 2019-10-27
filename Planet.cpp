/**
 *  @file Planet.cpp
 *  @class Planet
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "Planet.h"

/**
 * @param name - name of the planet
 * @param inhabited - indicating if planet has life on it
 * @param ores - amount of ares on planet
 * @param oil - amount of oil on planet
 * @param victuals - amount if victual(food+water) on planet
 * @param landscape - type of landscape 
 * @param planetType - type of planet
 * @param wildlife - list of critters
 */
Planet::Planet(string name, bool inhabited, double ores, double oil, double victuals,int landscape, int planetType, vector<Critter *> wildlife)
{
    this->_planetName               = name;
    this->_ores                     = ores;
    this->_oil                      = oil;
    this->_victuals                 = victuals;
    //this->_danger                   = dangerLevel;
    this->_landscape                = Environment(landscape);
    this->_inhabited                = (this->_type == PlanetType::solid) ? inhabited : false;
    this->_type                     = PlanetType(planetType);
    this->_terrestrialCritters      = wildlife;
    this->state                     = new HostilePlanetState();
}

Planet::~Planet(){

}

int Planet::getSafetyQuotient(){
    return _landscape * _nature; 
}

/**
 * @param s - PlanetState object
 * set current state to new state
 */
void Planet::setState(PlanetState* s){
    if(this->state != NULL) delete this->state;
    this->state = s;
}

string Planet::safetyLevel(){
    return this->state->getSafetyLevel();
}

/**
 * check if planet is safe and is a solid planet, if so inhabit it
 */
bool Planet::inhabit()
{
    if (this->state->getSafetyLevel() == "Safe" && !_inhabited && this->_type == PlanetType::solid)
    {
        _inhabited = true;
        return true;
    }
    return false;
}

/**
 * tame wildlife
 */
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

/**
 * change environment of planet
 */
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

/**
 * return ores multiplied by landscape density
 */
double Planet::oreOutput(){
    return _ores * _landscape; 
}

/**
 * return oil multiplied by landscape density
 */
double Planet::oilOutput(){
    return _oil * _landscape;
}

/**
 * return victuals multiplied by landscape density
 */
double Planet::victualOutput(){
    return _victuals * _landscape;
}

