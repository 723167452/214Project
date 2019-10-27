//
// Created by aaron on 2019/10/24.
//

#ifndef INC_214PROJECT_CAPTAIN_H
#define INC_214PROJECT_CAPTAIN_H


#include "Crew.h"
#include "Spacecraft.h"
#include "SpaceCraftCrew.h"
#include "Admiral.h"



using namespace std;
class Admiral;

class Captain : public Crew {
protected:
    string _log;
public:
    SpaceCraftCrew * myCrew;
    Admiral * admiral;
    Spacecraft * myShip;
    Captain(string name, Spacecraft * ship);
    void executeOrder(string s);
    void addCrew(SpaceCraftCrew * c);
    void removeCrew(string name);
    void addAdmiral(Admiral* a);
    void removeAdmiral();
    void sendMessage(string msg);
    void receiveMessage(string msg);
    void addToLog(string x);
    void printLog();
    string getDailyReport();
    ~Captain();
};


#endif //INC_214PROJECT_CAPTAIN_H