/**
 *  @file FasterThanLightDrive.h
 *  @class FasterThanLightDrive
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#ifndef INC_214PROJECT_FASTERTHANLIGHTDRIVE_H
#define INC_214PROJECT_FASTERTHANLIGHTDRIVE_H


#include "Engine.h"

class FasterThanLightDrive : public Engine {
protected:
    int charge;
    int maxCharge;
    int spinUpConsumption;
    //ship
public:
    FasterThanLightDrive(int, int);

    void jump(int, int);

    void spinUp();

    bool jumpStatus();

    ~FasterThanLightDrive();
};


#endif //INC_214PROJECT_FASTERTHANLIGHTDRIVE_H
