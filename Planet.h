#ifndef PLANET_H
#define PLANET_H
#include <string>
#include <vector>
using namespace std;
class Critters;
class Planet{
    private:
        enum Safety         { hostile = 0   , moderate = 1 ,    safe = 2} _danger;
        enum PlanetType     { gas     = 0   , solid    = 1              } _type;
        enum Environment    { Barren  = 0   , Sparse   = 1 ,   Dense = 2} _landscape;
        enum Wildlife       { untamed = 0   , moderate = 1 ,   tame  = 2} _nature;
        double _ores;
        double _oil;
        double _victuals;
        bool _inhabited;        //planet is inhabited
        string _planetName;
        vector<Critters*> _terrestrialCritters;
    protected:


    public:
        Planet(string, bool, double, double, double,Environment, Safety, PlanetType , vector<Critters*> );
        ~Planet();
        void determineSafety();
        bool inhabit();
        void terraform();
        void tameWildlife();
        double oreOutput();
        double oilOutput();
        double victualOutput();
};
#endif