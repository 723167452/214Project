/**
 *  @file Engine.h
 *  @class Engine
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#ifndef INC_214PROJECT_ENGINE_H
#define INC_214PROJECT_ENGINE_H


#include "AbstractPart.h"
#include <iostream>

class Engine : public AbstractPart {
protected:
    int thrust;
    int powerConsumption;
    int hp;
    int maxHp;
    bool status;
public:
    Engine();

    bool isOperational();

    int getThrust() const;

    int getPowerConsumption() const;

    int getHp() const;

    bool isStatus() const;

    void repair(int x);

    void takeDamage(int x);

    void broken(string);

    ~Engine();

    virtual int getHp();

    virtual void setHp(int newHp);
};


#endif //INC_214PROJECT_ENGINE_H
