//
// Created by aaron on 2019/10/08.
//

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
