/**
 *  @file AbstractPart.h
 *  @class AbstractPart
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef ABSTRACTPART_H
#define ABSTRACTPART_H
#include <string>
#include "Crew.h"

using namespace std;
class AbstractPart{
private:

protected:
    /*NOTE: standard is for globals to have _*/
    string _name;
    int _weight;
public:
    Crew* observer;
    AbstractPart();
    AbstractPart(string, int);
    string getName();
    int getWeight();
    void notify(AbstractPart* p);
    void attachChiefEngineer(Crew* e);
    virtual int getHp();
    virtual void setHp(int newHp);
};

#endif