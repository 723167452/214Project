/**
 *  @file SmallHull.h
 *  @class SmallHull
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef SMALLHULL_H
#define SMALLHULL_H
#include "Hull.h"
#include <string>
#include <iostream>
using namespace std;
class SmallHull: public Hull{
    public:
        SmallHull(bool);
        virtual ~SmallHull();
};
#endif