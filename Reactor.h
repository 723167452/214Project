#ifndef REACTOR_H
#define REACTOR_H
#include "AbstractPart.h"
#include <string>
using namespace std;
class Reactor : public AbstractPart{
    private:
        int maxHp = 100;
        int hp = 100;
    protected:
        long _energyProduction;
    public:
        Reactor(string, int, long);
        virtual ~Reactor() = 0;        
        long getEnergyProduction();
        void repair(int);
        void takeDamage(int);
        void broken(string);
        int getHp();
};
#endif