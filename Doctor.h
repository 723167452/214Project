/**
 *  @file Doctor.h
 *  @class Doctor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
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
