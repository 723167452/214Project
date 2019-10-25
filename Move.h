//
// Created by aaron on 2019/10/25.
//

#ifndef INC_214PROJECT_MOVE_H
#define INC_214PROJECT_MOVE_H


#include "Command.h"
#include "string"

using namespace std;

class Move : public Command {
protected:

public:
    Move();

    void execute(Captain * c,string order) override;

    ~Move();
};


#endif //INC_214PROJECT_MOVE_H
