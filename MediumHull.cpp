#include "MediumHull.h"

MediumHull::MediumHull(bool print_creation_message = false) : Hull("Medium Hull", 400,10000.00){
    if(print_creation_message){
        cout << "   created small hull..." <<endl;
    }
}

MediumHull::~MediumHull(){

}