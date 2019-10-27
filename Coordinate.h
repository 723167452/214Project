#ifndef COORDINATE_H
#define COORDINATE_H
#include <vector>
#include <string>

using namespace std;

class Coordinate{
    public:
        Coordinate();
        virtual ~Coordinate();
        int _x;
        int _y;
        std::string _coordObjType = "";
		static vector<Coordinate * > map;
};
#endif