//
// Created by aaron on 2019/10/24.
//

#ifndef INC_214PROJECT_CREW_H
#define INC_214PROJECT_CREW_H

#include <string>

using namespace std;

class Crew {

protected:
    string _name;
    string _title;
public:
    Crew();
    virtual ~Crew() = 0;
};


#endif //INC_214PROJECT_CREW_H
