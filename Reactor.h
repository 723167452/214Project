#ifndef REACTOR_H
#define REACTOR_H
#include "AbstractPart.h"
#include <string>
using namespace std;
class Reactor : public AbstractPart{
    private:

    protected:
        long _energyProduction;
    public:
        Reactor(string, int, long);
        virtual ~Reactor();        
        long getEnergyProduction();
        

};
#endif