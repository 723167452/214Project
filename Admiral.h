//
// Created by aaron on 2019/10/24.
//

#ifndef INC_214PROJECT_ADMIRAL_H
#define INC_214PROJECT_ADMIRAL_H


#include <vector>
#include "Crew.h"
#include "Command.h"
#include "Captain.h"

class Admiral : public Crew {
protected:
    string _log;
    Command _moveShip;
    Command _Taget;
    vector<Captain> _fleatCaptains;

public:
    Admiral(string name);

    void moveFleat();

    void moveShip();

    void fleatTarget();

    void shipTarget();

    Captain getCaptain(string name);

    void addCaptain(Captain * c);

    void removeCaptain(Captain * c);

    void addToLog(string x);

    ~Admiral() override;

};


#endif //INC_214PROJECT_ADMIRAL_H
