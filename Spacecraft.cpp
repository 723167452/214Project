/**
 *  @file Spacecraft.cpp
 *  @class Spacecraft
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Spacecraft.h"

/**
 * initialise Spacecraft and push to map
 */
Spacecraft::Spacecraft() 
{
    _hull = NULL;    
    _hull = NULL;
    _coordObjType = "spacecraft";
    this->map.push_back(this);

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

/**
 * Calls get weight on hull object, as hull object contains weight of all connected parts
 */
int Spacecraft::getTotalWeight(){
    return _hull->getCurrentWeight();
}

/**
 * @param n - name of the shipcraft
 */
void Spacecraft::setName(string n){
    _name = n;
}

/**
 * @param h - hull object to be added 
 */
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

/**
 * @param w - weapon object to be added 
 */
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

/**
 * @param r - reactor object to be added 
 */
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

/**
 * @param r - room object to be added 
 */
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

/**
 * @param e - engine object to be added 
 */
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

/**
 * print all details of the ship and its parts
 */
void Spacecraft::printShip(){
    cout << endl;
    cout << "Ship Name: " << this->_name << endl;
    cout << "Total Weight: " << this->getTotalWeight() << endl << endl;

    cout << "Hull Name: " << this->_hull->getName() << endl;

    cout << "Rooms:" << endl;

    for (size_t i = 0; i < _rooms.size(); i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << this->_rooms[i]->getName()   << endl;
        cout << "Weight             : " << this->_rooms[i]->getWeight() << endl;
        cout << "Crew               : " << endl;
        this->_rooms[i]->getCrew();
        cout << "-----------------------------" << endl;
    }

    cout << "Reactors:" << endl;

    for (size_t i = 0; i < _reactors.size(); i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << this->_reactors[i]->getName()   << endl;
        cout << "Weight             : " << this->_reactors[i]->getWeight() << endl;
        cout << "Energy Production  : " << this->_reactors[i]->getEnergyProduction() << endl;
        cout << "-----------------------------" << endl; 
    }

    cout << "Engines:" << endl;

    for (size_t i = 0; i < _engines.size(); i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << this->_engines[i]->getName()   << endl;
        cout << "Weight             : " << this->_engines[i]->getWeight() << endl;
        cout << "Thrust             : " << this->_engines[i]->getThrust() << endl;
        cout << "-----------------------------" << endl; 
    }

    cout << "Weapons:" << endl;

    for (size_t i = 0; i < _weapons.size(); i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << this->_weapons[i]->getName()   << endl;
        cout << "Weight             : " << this->_weapons[i]->getWeight() << endl;
        cout << "Damage             : " << this->_weapons[i]->getDamage() << endl;
        cout << "-----------------------------" << endl; 
    }
}

/**
 * call all parts repair function 
 */
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

/**
 * replenish spacecraft fuel
 */
void Spacecraft::resupply() {
    fuel = 100; //this value is a %
}

/**
 * @param critter - critter object to add to prison
 */
bool Spacecraft::addCritterPrisoner(Critter* critter) {
    if(critter->isDefeated()) {
        _critterPrisonerList.push_back(critter);
        return true;
    }
    return false;
}

/**
 * @param dmg - amount of damage taken
 *
 * Randomise which part of ship to get damaged and call the parts takeDamage function
 * if hull's hp is on 0, ship is destroyed
 */
void Spacecraft::getAttacked(int dmg){
    srand (time(NULL));
    int partHit = rand()%((4 - 0) + 1) + 0;
    int locationHit;
    switch(partHit){
        case 0: _hull->takeDamage(dmg);
                break;
        case 1:
                locationHit = rand()%((_rooms.size() - 0)) + 0;
                _rooms[locationHit]->takeDamage(dmg);
                _hull->takeDamage(dmg);
                break;
        case 2: 
                locationHit = rand()%((_reactors.size() - 0)) + 0;
                _reactors[locationHit]->takeDamage(dmg);
                _hull->takeDamage(dmg);
                break;
        case 3: 
                locationHit = rand()%((_weapons.size() - 0)) + 0;
                _weapons[locationHit]->takeDamage(dmg);
                _hull->takeDamage(dmg);
                break;
        case 4: 
                locationHit = rand()%((_engines.size() - 0)) + 0;
                _engines[locationHit]->takeDamage(dmg);
                _hull->takeDamage(dmg);
                break;
        default: _hull->takeDamage(dmg);
                 break;
    }
    if (_hull->getHp() <= 0)
    {
        cout << "BOOM! " << _name << " has been destroyed." << endl;
        _destroyed = true; 
    }else {
        cout << _name << "'s hull is on " << _hull->getHp() << "hp" << endl;  
    }
}

/**
 * return bool of whether ship is destroyed or not
 */
bool Spacecraft::getStatus(){
    return _destroyed;
}

/**
 * @param s - coordinate string, loop through global shared array of objects
 * 
 * finds critter at coordinate and attack it
 */
void Spacecraft::attackTarget(string s){
    srand (time(NULL));
    string xCoord = "", yCoord = "";
    int intXCoord = 0, intYCoord = 0;
    int yStart = 0; int stringLength = s.length();

    /*coordinate string extraction*/
    if(s.at(0) == 'A') {
        // attack at coordinate
        if(s.at(1) == 'x') {
            for(int i = 2; i < stringLength; i++) {
                if(s.at(i) != 'y'){
                    xCoord += s.at(i);

                }else{ 
                    yStart = ++i;
                    break;
                }
            }
            for(int i = yStart++; i < stringLength; i++) {
                yCoord += s.at(i);
            }
        }

        intXCoord = stoi(xCoord);
        intYCoord = stoi(yCoord);


        /*loop through map vector until critter at coordinate found, 
          select a random weapon in weapon vector and attack the critter
          by casting its parent map (coordinate) to type critter only if 
          object in map is set as type critter*/
        vector<Coordinate*>::iterator ptr;
        for (ptr = map.begin(); ptr < map.end(); ptr++) {
            if ((*ptr)->_x == intXCoord && (*ptr)->_y == intYCoord ){
                if ((*ptr)->_coordObjType == "critter")
                {
                    int weaponSelect = rand()%((_weapons.size() - 0)) + 0;

                    _weapons[weaponSelect]->attack((dynamic_cast<Critter*> (*ptr)));
                }
            }
        }
        
    }
}

/**
 * construct ship daily report string
 */
string Spacecraft::getDailyReport(){
    string report = "";

    report += "Daily report\n";
    report += "Ship: " + this->_name + "\n\n";
    report += "Fuel: " + to_string(this->fuel) + "\n";
    report += "Hull HP: " + to_string(_hull->getHp()) + "\n\n";
    for (Room* r : _rooms)
    {
        report += (r->getName() + ": " + to_string(r->getConsumables())) + "\n";
    }

    for (Reactor* r : _reactors)
    {
        report += (r->getName() + ": " + to_string(r->getHp())) + "\n";
    }

    for (Weapon* w : _weapons)
    {
        report += (w->getType() + ": " + to_string(w->getAmmo())) + "\n";
    }

    for (Engine* e : _engines)
    {
        report += (e->getName() + ": " + to_string(e->getHp())) + "\n";
    }

    return report;
}