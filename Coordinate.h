#ifndef COORDINATE_H
#define COORDINATE_H
#include "Planet.h"
#include "Spacecraft.h"
#include <vector>
class Coordinate{
    private:
        Planet* _planet;
        vector<Spacecraft*> _allyFleet;
        vector<Spacecraft*> _enemyFleet;
    protected:
        
    public:
        Coordinate();
        virtual ~Coordinate();
        bool addPlanet(Planet*);
        bool removeAllySpacecraft(Spacecraft*);
        bool removeEnemySpacecraft(Spacecraft*);
};
#endif