#include "SmallHull.h"

SmallHull::SmallHull(bool print_craetion_message = false) : Hull("Small Hull", 1000,10000.00){
    if(print_craetion_message){
        cout << "   created small hull..." <<endl;
    }
}

SmallHull::~SmallHull(){

}