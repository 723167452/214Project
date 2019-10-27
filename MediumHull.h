/**
 *  @file MediumHull.h
 *  @class MediumHull
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef MEDIUMHULL_H
#define MEDIUMHULL_H
#include "Hull.h"
#include <string>
#include <iostream>
using namespace std;
class MediumHull: public Hull{
    public:
        MediumHull(bool);
        virtual ~MediumHull();
};
#endif