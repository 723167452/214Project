//Dylan Krajnc

#ifndef CREW_H
#define CREW_H

#include <iostream>
using namespace std;

class Crew {
public:
    Crew(string);
    ~Crew();

    string getName();
protected:
    string name;
};

#endif