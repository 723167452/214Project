#include "LargeHull.h"

LargeHull::LargeHull(bool print_creation_message = false) : Hull("Large Hull", 1000,100000000.00){
    if(print_creation_message){
        cout << "   created large hull..." <<endl;
    }
}

LargeHull::~LargeHull(){

}