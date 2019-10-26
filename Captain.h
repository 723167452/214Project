//
// Created by aaron on 2019/10/24.
//

#ifndef INC_214PROJECT_CAPTAIN_H
#define INC_214PROJECT_CAPTAIN_H


#include "Crew.h"
#include "Spacecraft.h"
#include "SpaceCraftCrew.h"

class Captain : public Crew {
protected:
    Spacecraft * myShip;
    SpaceCraftCrew * myCrew;
public:
    Captain(string name, Spacecraft * ship);
    void executeOrder(string s);
    void addCrew(SpaceCraftCrew * c);
    void removeCrew(string name);
    ~Captain();
};


#endif //INC_214PROJECT_CAPTAIN_H