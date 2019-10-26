//
// Created by aaron on 2019/10/26.
//

#ifndef INC_214PROJECT_SPACECRAFTCREW_H
#define INC_214PROJECT_SPACECRAFTCREW_H


#include "Crew.h"
#include "Spacecraft.h"

class SpaceCraftCrew : public Crew {
protected:
    SpaceCraftCrew * next;
public:
    virtual void executeOrder(string s, Spacecraft * ship) = 0;
};


#endif //INC_214PROJECT_SPACECRAFTCREW_H
