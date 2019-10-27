/**
 *  @file SmallReactor.h
 *  @class SmallReactor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef SMALLREACTOR_H
#define SMALLREACTOR_H
#include "Reactor.h"
#include <string>
#include <iostream>
using namespace std;
class SmallReactor: public Reactor{
    public:
        SmallReactor(bool);
        virtual ~SmallReactor();
};
#endif