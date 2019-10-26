//
// Created by aaron on 2019/10/24.
//

#ifndef INC_214PROJECT_ADMIRAL_H
#define INC_214PROJECT_ADMIRAL_H


#include <vector>
#include "Crew.h"
#include "Command.h"
#include "Captain.h"
#include "CaptainLogMemento.h"

class Command;
class Captain;

class Admiral : public Crew {
protected:
    string _log;
    Command * _moveShip;
    Command  * _shoot;
    vector<Captain *> _fleatCaptains;

public:
    Admiral(string name);

    void moveFleet(string coord);

    void moveShip(string captainName,string order);

    void fleetTarget(string coord);

    void shipTarget(string captainName,string order);

    Captain * getCaptain(string name);

    void addCaptain(Captain * c);

    void removeCaptain(string name);

    void addToLog(string x);

    void printLog();

    ~Admiral();

    CaptainLogMemento* createMemento();

    void setMemento(CaptainLogMemento* memento);

    void broadcast(string msg);

    void talkTo(string msg, Captain* c);

};


#endif //INC_214PROJECT_ADMIRAL_H
