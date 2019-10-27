#ifndef COORDINATE_H
#define COORDINATE_H
#include <vector>

using namespace std;

class Coordinate{
    public:
        Coordinate();
        virtual ~Coordinate();
        int _x;
        int _y;
	static vector<Coordinate * > map;
};
#endif