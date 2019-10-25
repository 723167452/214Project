#include "Planet.h"

Planet::Planet(string name, bool inhabited, double ores, double oil, double victuals, Safety dangerLevel, PlanetType planetType, vector<Critters *> wildlife)
{
    this->_planetName = name;
    this->_ores = ores;
    this->_oil = oil;
    this->_victuals = victuals;
    this->_danger = dangerLevel;
    this->_inhabited = (this->_type == PlanetType::solid) ? inhabited : false;
    this->_type = planetType;
    this->_wildLife = wildlife;
}

Planet::~Planet()
{
}

bool Planet::inhabit()
{
    if (this->_danger == Safety::safe && !_inhabited && this->_type == PlanetType::solid)
    {
        _inhabited = true;
        return true;
    }
    return false;
}

void Planet::makeSafer()
{
    if (this->_type == PlanetType::solid)
    {
        switch (this->_danger)
        {
        case Safety::safe:
            break;
        case Safety::moderate:
            this->_danger = Safety::safe;
            break;
        case Safety::hostile:
            this->_danger = Safety::moderate;
            break;
        }
    }
}