#ifndef SPACESTATION_H
#define SPACESTATION_H
#include "Spacecraft.h"
#include <vector>
using namespace std;
class Spacestation : public Spacecraft{
    private:
        static Spacestation* _onlyInstance;
        vector<Spacecraft*> _fleet;
    protected:
        Spacestation();
        Spacestation(const Spacestation&);
        virtual ~Spacestation();
    public:
        static Spacestation* instance();
        void updateStation(Spacestation&);
        bool attach(Spacecraft*);
        bool detach(Spacecraft*);


};
#endif