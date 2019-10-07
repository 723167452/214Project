#include "Weapon.h"
#include "LaserTurrent.h"
#include <string>
#include <iostream>
using namespace std;

int main(){

	Weapon* turrent = new LaserTurrent();
	cout << endl;
	turrent->repair(10);
	cout << endl;
	turrent->getStatus();
	cout << endl;
	for (int i = 0; i < 10; ++i)
	{
		turrent->fire();
	}
	cout << endl;
	turrent->getStatus();
	cout << endl;
	turrent->takeDamage(73);
	cout << endl;
	turrent->getStatus();
	cout << endl;
	turrent->repair(50);
	turrent->repair(100);
	return 0;
}