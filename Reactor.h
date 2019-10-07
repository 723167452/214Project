#ifndef REACTOR_H
#define REACTOR_H
#include "AbstractPart.h"
#include <string>
using namespace std;
class Reactor : public AbstractPart{
    private:

    protected:

    public:
        Reactor(string, int);
        ~Reactor();        

};
#endif