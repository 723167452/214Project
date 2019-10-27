/**
 *  @file LargeHull.h
 *  @class LargeHull
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef LARGEHULL_H
#define LARGEHULL_H
#include "Hull.h"
#include <string>
#include <iostream>
using namespace std;
class LargeHull: public Hull{
    public:
        LargeHull(bool);
        virtual ~LargeHull();
};
#endif