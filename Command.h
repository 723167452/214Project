//
// Created by aaron on 2019/10/24.
//

#ifndef INC_214PROJECT_COMMAND_H
#define INC_214PROJECT_COMMAND_H


#include "Captain.h"
#include "string"

using namespace std;

class Command {
public:
    Command();
    virtual void execute(Captain * c,string order) = 0;
};


#endif //INC_214PROJECT_COMMAND_H
