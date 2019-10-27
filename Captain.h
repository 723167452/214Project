/**
 *  @file Captain.h
 *  @class Captain
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

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
    SpaceCraftCrew * myCrew;
    string _log;
public:
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