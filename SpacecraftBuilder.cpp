#include "SpacecraftBuilder.h"

#include "SmallHull.h"
#include "MediumHull.h"
#include "LargeHull.h"

#include "Bridge.h"
#include "MedBay.h"
#include "SleepingQuarter.h"

#include "SmallReactor.h"
#include "MediumReactor.h"
#include "LargeReactor.h"

#include "FasterThanLightDrive.h"
#include "SubLightSpeedEngines.h"

SpacecraftBuilder::SpacecraftBuilder(){
    
}

SpacecraftBuilder::~SpacecraftBuilder(){
    
}

Hull* SpacecraftBuilder::selectHull(string n){
    if(n == "Small Hull"){
        SmallHull* sh = new SmallHull(true);
        return sh;
    } else if(n == "Medium Hull"){
        MediumHull* mh = new MediumHull(true);
        return mh;
    } else if(n == "Large Hull"){
        LargeHull* lh = new LargeHull(true);
        return lh;
    } else{
        cout << "This hull does not exist" << endl;
    }
}

Room* SpacecraftBuilder::selectRooms(string n){
    if(n == "Bridge"){
        Bridge* br = new Bridge(true, true);
        return br;
    } else if(n == "Med Bay"){
        MedBay* md = new MedBay(10, true);
        return md;
    } else if(n == "Sleeping Quarter"){
        SleepingQuarter* sq = new SleepingQuarter(25, 30, true);
        return sq;
    } else{
        cout << "This room does not exist" << endl;
    }
}

Engine* SpacecraftBuilder::selectEngines(string n) {
    if(n == "FTL"){
        FasterThanLightDrive* ftl = new FasterThanLightDrive(0, 50);
        return ftl;
    } else if(n == "SLS"){
        SubLightSpeedEngines* sls = new SubLightSpeedEngines(0, 25);
        return sls;
    } else{
        cout << "This engine does not exist" << endl;
    }
}

void SpacecraftBuilder::selectGuns(string n){

}

Reactor* SpacecraftBuilder::selectReactors(string n){
    if(n == "Small Reactor"){
        SmallReactor* sr = new SmallReactor(true);
        return sr;
    } else if(n == "Medium Reactor"){
        MediumReactor* mr = new MediumReactor(true);
        return mr;
    } else if(n == "Large Reactor"){
        LargeReactor* lr = new LargeReactor(true);
        return lr;
    } else{
        cout << "This reactor does not exist" << endl;
    }
}