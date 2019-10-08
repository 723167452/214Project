#ifndef HULL_H
#define HULL_H
#include "AbstractPart.h"
#include <string>
using namespace std;
class Hull : public AbstractPart{
    private:

    protected:
        double _hullSpace;
    public:
        Hull(string, int, double);
        virtual ~Hull();
        double getHullSpace();
};
#endif