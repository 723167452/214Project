#ifndef LARGEREACTOR_H
#define LARGEREACTOR_H
#include "Reactor.h"
#include <string>
#include <iostream>
using namespace std;
class LargeReactor: public Reactor{
    LargeReactor(bool);
    ~LargeReactor();
};
#endif