#include "Spacecraft.h"

Spacecraft::Spacecraft() 
{
    _hull = NULL;
    
}

Spacecraft::~Spacecraft()
{
    _rooms.clear();
    _reactors.clear();
    _weapons.clear();
    _engines.clear();
}

void Spacecraft::sendCommand()
{
}

int Spacecraft::getWeight(){
    return _hull->getCurrentWeight();
}

void Spacecraft::setName(string n){
    _name = n;
}

bool Spacecraft::addHull(Hull *h)
{
    if (!this->_hull)
    {
        this->_hull = h;
        cout << "   added " << h->getName() << "..." << endl;
        return true;
    }
    else
    {
        cout << "   spacecraft already has a hull..." << endl;
        return false;
    }
}

bool Spacecraft::addWeapon(Weapon *w)
{
    if (!this->_hull)
    {
        cout << "   no hull to add weapon to..." << endl;
        return false;
    }
    else
    {
        if(this->_hull->addPartToHull(w)){
            cout << "   added " << w->getName() << "..." <<  endl;
            this->_weapons.push_back(w);
            return true;
        }else{
            return false;
        }
    }
}

bool Spacecraft::addReactor(Reactor *r)
{
    if (!this->_hull)
    {
        cout << "   no hull to add reactor to..." << endl;
        return false;
    }
    else
    {
        if(this->_hull->addPartToHull(r)){
            cout << "   added " << r->getName() << endl;
            this->_reactors.push_back(r);
            return true;
        }else{
            return false;
        }
       
    }
}

bool Spacecraft::addRoom(Room *r)
{
    if (!this->_hull)
    {
        cout << "   no hull to add room to..." << endl;
        return false;
    }
    else
    {
        if(this->_hull->addPartToHull(r)){
            cout << "   added " << r->getName() << "..." << endl;
            this->_rooms.push_back(r);
            return true;
        }else{
            return false;
        }
        
    }
}

bool Spacecraft::addEngine(Engine *e)
{
    if (!this->_hull)
    {
        cout << "   no hull to add engine to..." << endl;
        return false;
    }
    else
    {
        if(this->_hull->addPartToHull(e)){
            cout << "   added " << e->getName() << "..." <<  endl;
            this->_engines.push_back(e);
            return true;
        }else{
            return false;
        }
    }
}

void Spacecraft::printShip(){
    cout << endl;
    cout << "Ship Name: " << this->_name << endl;
    cout << "Total Weight: " << this->getWeight() << endl << endl;

    cout << "Hull Name: " << this->_hull->getName() << endl;

    cout << "Rooms:" << endl;

    for (size_t i = 0; i < 3; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << this->_rooms[i]->getName()   << endl;
        cout << "Weight             : " << this->_rooms[i]->getWeight() << endl;
        cout << "Crew               : " << endl;
        this->_rooms[i]->getCrew();
        cout << "-----------------------------" << endl;
    }

    cout << "Reactors:" << endl;

    for (size_t i = 0; i < 1; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << this->_reactors[i]->getName()   << endl;
        cout << "Weight             : " << this->_reactors[i]->getWeight() << endl;
        cout << "Energy Production  : " << this->_reactors[i]->getEnergyProduction() << endl;
        cout << "-----------------------------" << endl; 
    }

    cout << "Engines:" << endl;

    for (size_t i = 0; i < 2; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << this->_engines[i]->getName()   << endl;
        cout << "Weight             : " << this->_engines[i]->getWeight() << endl;
        cout << "Thrust             : " << this->_engines[i]->getThrust() << endl;
        cout << "-----------------------------" << endl; 
    }

    cout << "Weapons:" << endl;

    for (size_t i = 0; i < 1; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << this->_weapons[i]->getName()   << endl;
        cout << "Weight             : " << this->_weapons[i]->getWeight() << endl;
        cout << "Damage             : " << this->_weapons[i]->getDamage() << endl;
        cout << "-----------------------------" << endl; 
    }
}

void Spacecraft::repair(){
    vector<Weapon*>::iterator weapon = _weapons.begin();
    while((weapon != _weapons.end())){
         (*weapon)->repair(199);
         ++weapon;
    }
    vector<Reactor*>::iterator reactor = _reactors.begin();
    while((reactor != _reactors.end())){
        (*reactor)->repair(199);
        ++reactor;
    }
    vector<Engine*>::iterator engine = _engines.begin();
    while(engine != _engines.end()){
        (*engine)->repair(199);
        ++engine;
    }

    _hull->repair(100);
}

void Spacecraft::resupply() {
    fuel = 100; //this value is a %
}

bool Spacecraft::addCritterPrisoner(Critter* critter) {
    if(critter->isDefeated()) {
        _critterPrisonerList.push_back(critter);
        return true;
    }
    return false;
}