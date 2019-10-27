#include "MediumHull.h"

MediumHull::MediumHull(bool print_creation_message = false) : Hull("Medium Hull", 2000,20000.00){
    if(print_creation_message){
        cout << "   created medium hull..." <<endl;
    }
}

MediumHull::~MediumHull(){

}