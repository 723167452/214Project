#ifndef DOCTOR_H
#define DOCTOR_H

#include "Crew.h"

class Doctor : public Crew {
private:
    Crew* _next;
public:
    Doctor(string n);
};

#endif 
