#include "MediumReactor.h"

MediumReactor::MediumReactor(bool print_creation_message = false) : Reactor("Medium Reactor", 500,1000000){
    if(print_creation_message){
        cout << "   created medium reactor..." << endl;
    }
}

MediumReactor::~MediumReactor(){
    
}