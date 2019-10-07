#ifndef REACTOR_H
#define REACTOR_H
#include "AbstractPart.h"
#include <string>
using namespace std;
class Reactor : public AbstractPart{
    private:

    protected:
        int _energyProduction;
    public:
        Reactor(string, int, int);
        ~Reactor();        
        int getEnergyProduction();
        

};
#endif