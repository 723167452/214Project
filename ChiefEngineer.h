#ifndef CHIEFENGINEER_H
#define CHIEFENGINEER_H

#include "Crew.h"

class ChiefEngineer : public Crew {
private:
    Crew* _next;
public:
    ChiefEngineer(string n);
};

#endif 
