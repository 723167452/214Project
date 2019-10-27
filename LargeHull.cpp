#include "LargeHull.h"

LargeHull::LargeHull(bool print_creation_message = false) : Hull("Large Hull", 4000,40000.00){
    if(print_creation_message){
        cout << "   created large hull..." <<endl;
    }
}

LargeHull::~LargeHull(){

}