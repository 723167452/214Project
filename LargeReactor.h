/**
 *  @file LargeReactor.h
 *  @class LargeReactor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef LARGEREACTOR_H
#define LARGEREACTOR_H
#include "Reactor.h"
#include <string>
#include <iostream>
using namespace std;
class LargeReactor: public Reactor{
    public:
        LargeReactor(bool);
        virtual ~LargeReactor();
};
#endif