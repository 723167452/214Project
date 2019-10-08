#include "SmallHull.h"

SmallHull::SmallHull(bool print_craetion_message = false) : Hull("Small Hull", 100,500.00){
    if(print_craetion_message){
        cout << "   created small hull..." <<endl;
    }
}

SmallHull::~SmallHull(){

}