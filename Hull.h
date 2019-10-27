/**
 *  @file Hull.h
 *  @class Hull
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
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
        int getCurrentWeight();
        void takeDamage(int);
        void broken(string);
        virtual int getHp();
        virtual void setHp(int newHp);
};
#endif