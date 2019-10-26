#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include "Crew.h"

class Navigator : public Crew {
private:
    Crew* _next;
public:
    Navigator(string n);
};

#endif 
