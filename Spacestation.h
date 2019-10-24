#ifndef SPACESTATION_H
#define SPACESTATION_H
#include "Spacecraft.h"
#include <vector>
#include <stdio.h>
using namespace std;
class Spacestation : public Spacecraft{
    private:
        static Spacestation* _onlyInstance;
        vector<Spacecraft*> _fleet;
        enum DangerLevel{Green, Yellow, Red};
        DangerLevel currentLevel = Green;
    protected:
        Spacestation();
        Spacestation(const Spacestation&);
        virtual ~Spacestation();
    public:
        static Spacestation* instance();
        void updateStation(Spacestation&);
        bool attach(Spacecraft*);
        bool detach(Spacecraft*);

        void setCurrentLevelGreen();
        void setCurrentLevelYellow();
        void setCurrentLevelRed();
};
#endif