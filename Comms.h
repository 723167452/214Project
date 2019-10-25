#ifndef COMMS_H
#define COMMS_H

#include "Crew.h"

class Comms : public Crew {
private:
    Crew* _next;
public:
    Comms(string n);
};

#endif 
