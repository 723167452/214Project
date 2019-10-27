/**
 *  @file MediumReactor.h
 *  @class MediumReactor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef MEDIUMREACTOR_H
#define MEDIUMREACTOR_H
#include "Reactor.h"
#include <string>
#include <iostream>
using namespace std;
class MediumReactor: public Reactor{
    public:
        MediumReactor(bool);
        virtual ~MediumReactor();
};
#endif