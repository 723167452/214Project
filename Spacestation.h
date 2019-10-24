#ifndef SPACESTATION_H
#define SPACESTATION_H
#include "Room.h"
#include "Spacecraft.h"
#include <vector>
using namespace std;
class Spacestation : public Spacecraft , public Room{
    private:
        static Spacestation* _onlyInstance;
        vector<Spacecraft*> _fleet;
    protected:
        Spacestation();
        Spacestation(const Spacestation&);
        ~Spacestation();
        Spacestation& operator=(const Spacestation&);
    public:
        static Spacestation* instance();
        void updateStation(Spacestation&);


};
#endif