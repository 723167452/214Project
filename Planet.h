#ifndef PLANET_H
#define PLANET_H
#include <string>
#include <vector>
using namespace std;
class Critters;
class Planet{
    private:
        enum Safety { hostile, moderate, safe} _danger;
        enum PlanetType { gas , solid} _type;
        double _ores;
        double _oil;
        double _victuals;
        bool _inhabitable;      //planet is inhabitable or not
        bool _inhabited;        //planet is inhabited
        string _planetName;
        vector<Critters*> _wildLife;
    protected:


    public:
        Planet(string, bool, bool, double, double, double,Safety, PlanetType , vector<Critters*> );
        ~Planet();
        bool inhabit();
        void makeSafer();
};
#endif