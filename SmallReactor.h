#ifndef SMALLREACTOR_H
#define SMALLREACTOR_H
#include "Reactor.h"
#include <string>
#include <iostream>
using namespace std;
class SmallReactor: public Reactor{
    SmallReactor(bool);
    ~SmallReactor();
};
#endif