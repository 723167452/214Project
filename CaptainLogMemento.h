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