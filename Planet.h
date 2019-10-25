#ifndef PLANET_H
#define PLANET_H
#include "Coordinate.h"
#include <string>
#include <vector>
#include "PlanetState.h"
#include "HostilePlanetState.h"
using namespace std;
class Critters;
class PlanetState;
class HostilePlanetState;
//context
class Planet : public Coordinate{
    private:
        enum PlanetType     { gas     = 0   , solid    = 1              } _type;
        enum Environment    { Barren  = 0   , Sparse   = 1 ,   Dense = 2} _landscape;
        enum Wildlife       { untamed = 0   , moderate = 1 ,   tame  = 2} _nature;
        double _ores;
        double _oil;
        double _victuals;
        bool _inhabited;        //planet is inhabited
        string _planetName;
        vector<Critters*> _terrestrialCritters;
        PlanetState* state;
    protected:


    public:
        Planet(string, bool, double, double, double,Environment, PlanetType , vector<Critters*> );
        ~Planet();
        void change();
        void setState(PlanetState*);
        string safetyLevel();
        int getSafetyQuotient();
        bool inhabit();
        void terraform();
        void tameWildlife();
        double oreOutput();
        double oilOutput();
        double victualOutput();
};
#endif