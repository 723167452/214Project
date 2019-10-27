/**
 *  @file Command.h
 *  @class Command
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#ifndef INC_214PROJECT_COMMAND_H
#define INC_214PROJECT_COMMAND_H


#include "Captain.h"
#include "string"
class Captain;

using namespace std;

class Command {
public:
    Command();
    virtual void execute(Captain * c,string order) = 0;
};


#endif //INC_214PROJECT_COMMAND_H
