/**
 *  @file CaptainLogMemento.h
 *  @class CaptainLogMemento
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef CAPTAINLOGMEMENTO_H
#define CAPTAINLOGMEMENTO_H

#include <string>

using namespace std;

class CaptainLogMemento {
private:
    string _log;
public:
    CaptainLogMemento();
    string getState();
    void setState(string log);
};


#endif 