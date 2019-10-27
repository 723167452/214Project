/**
 *  @file Pewpew.h
 *  @class Pewpew
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

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
