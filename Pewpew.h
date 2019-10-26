//
// Created by aaron on 2019/10/25.
//

#ifndef INC_214PROJECT_PEWPEW_H
#define INC_214PROJECT_PEWPEW_H


#include "Command.h"

class Pewpew : public Command{
public:
    Pewpew();

    void execute(Captain * c,string order) override;
    
    ~Pewpew();
};


#endif //INC_214PROJECT_PEWPEW_H
