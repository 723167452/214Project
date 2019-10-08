/*Non-Design Pattern*/
#include <iostream>
#include <string>

/*Abstract Part Hierarchy*/
//AbstractPart
#include "AbstractPart.h"
    //Concrete parts
    #include "Reactor.h"
        //Concrete Reactors
        #include "SmallReactor.h"
        #include "MediumReactor.h"
        #include "LargeReactor.h"
    #include "Hull.h"
        //Concrete Hull
        #include "SmallHull.h"
        #include "MediumHull.h"
        #include "LargeHull.h"
using namespace std;

int main(){

    /*Reactor Part*/
    cout<<  "Creating Reactors" << endl;
    cout<<  "==========================================" <<endl;
    Reactor* smallReactor   = new SmallReactor(true);
    Reactor* mediumReactor  = new MediumReactor(true);
    Reactor* largeReactor   = new LargeReactor(true);
    Reactor *reactors[3] = {smallReactor, mediumReactor, largeReactor};
    for (size_t i = 0; i < 3; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << reactors[i]->getName()   << endl;
        cout << "Weight             : " << reactors[i]->getWeight() << endl;
        cout << "Energy Production  : " << reactors[i]->getEnergyProduction() << endl;
        cout << "-----------------------------" << endl; 
    }
    cout<<  "==========================================" <<endl;

    /*Hull Part*/
    cout<<  "Creating Hull" << endl;
    cout<<  "==========================================" <<endl;
    Hull* smallHull      = new SmallHull(true);
    Hull* mediumHull     = new MediumHull(true);
    Hull* largeHull      = new LargeHull(true);
    
    Hull *hulls[3] = {smallHull, mediumHull, largeHull};
    for (size_t i = 0; i < 3; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << hulls[i]->getName()   << endl;
        cout << "Weight             : " << hulls[i]->getWeight() << endl;
        cout << "Hull Space         : " << hulls[i]->getHullSpace() << endl;
        cout << "-----------------------------" << endl; 
    }
    cout<<  "==========================================" <<endl;
    /*Clear Memory*/
    *reactors = NULL;
    delete smallReactor;
    delete mediumReactor;
    delete largeReactor;

    *hulls = NULL;
    delete smallHull;
    delete mediumHull;
    delete largeHull;
    return 0;
}