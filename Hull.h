#ifndef HULL_H
#define HULL_H
#include "AbstractPart.h"
#include <iostream>
#include <string>
using namespace std;
class Hull : public AbstractPart{
    private:

    protected:
        double _maxWeight;
        double _currentWeight;
        // int armourValue;
        // bool hasShield;
        int hullSpace;
        int hp;
    public:
        Hull(string, int, double);
        bool addPartToHull(AbstractPart*);
        virtual ~Hull();
        double getMaxWeight();
        int getHullSpace();
        void repair(int);
        void takeDamage(int);
        int getCurrentWeight();
};
#endif