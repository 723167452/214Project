#ifndef DOCTOR_H
#define DOCTOR_H

#include "SpaceCraftCrew.h"
#include "Spacecraft.h"

class Doctor : public SpaceCraftCrew {
public:
    Doctor(string n);
    virtual void executeOrder(string s, Spacecraft * ship);
};

#endif 
