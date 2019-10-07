#ifndef MEDIUMREACTOR_H
#define MEDIUMREACTOR_H
#include "Reactor.h"
#include <string>
#include <iostream>
using namespace std;
class MediumReactor: public Reactor{
    MediumReactor(bool);
    ~MediumReactor();
};
#endif