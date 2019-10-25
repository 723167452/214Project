#ifndef ENGINEER_H
#define ENGINEER_H

#include "Crew.h"

class Engineer : public Crew {
private:
    Crew* _next;
public:
    Engineer(string n);
};

#endif 
