#ifndef FIGHTER_H
#define FIGHTER_H

#include "Crew.h"

class Fighter : public Crew {
private:
    Crew* _next;
public:
    Fighter(string n);
};

#endif 
