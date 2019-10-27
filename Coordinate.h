/**
 *  @file Coordinate.h
 *  @class Coordinate
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
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