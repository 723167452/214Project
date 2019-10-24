#ifndef ABSTRACTPART_H
#define ABSTRACTPART_H
#include <string>

using namespace std;
class AbstractPart{
private:

protected:
    /*NOTE: standard is for globals to have _*/
    string _name;
    int _weight;
public:
    AbstractPart();
    AbstractPart(string, int);
    string getName();
    int getWeight();
};
#endif