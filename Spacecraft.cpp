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
    cout << "   adding weapons not yet allowed..." << endl;
    return false;
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
