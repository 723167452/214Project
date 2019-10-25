#include "Coordinate.h"

Coordinate::Coordinate()
{
    _planet = NULL;
}

Coordinate::~Coordinate()
{
}

bool Coordinate::addPlanet(Planet *p)
{
    if (!_planet)
    {
        this->_planet = p;
        return true;
    }
    return false;
}

bool Coordinate::removeAllySpacecraft(Spacecraft *craft)
{
    vector<Spacecraft *>::iterator it = _allyFleet.begin();
    bool found = false;
    while ((it != _allyFleet.end()) && !found)
    {
        if (*it == craft)
        {
            found = true;
            _allyFleet.erase(it);
        }
        ++it;
    }
    return found;
}

bool Coordinate::removeEnemySpacecraft(Spacecraft *craft)
{
    vector<Spacecraft *>::iterator it = _enemyFleet.begin();
    bool found = false;
    while ((it != _enemyFleet.end()) && !found)
    {
        if (*it == craft)
        {
            found = true;
            _enemyFleet.erase(it);
        }
        ++it;
    }
    return found;
}