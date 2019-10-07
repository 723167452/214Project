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

using namespace std;

int main(){

    Reactor* smallReactor   = new SmallReactor(true);
    Reactor* mediumReactor  = new MediumReactor(true);
    Reactor* LargeReactor   = new LargeReactor(true);
    

    return 0;
}