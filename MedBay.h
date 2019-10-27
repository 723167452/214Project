/**
 *  @file MedBay.h
 *  @class MedBay
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#ifndef MEDBAY_H
#define MEDBAY_H

#include <iostream>
#include "Room.h"
using namespace std;

class MedBay : public Room {
public:
	MedBay(int, bool);
	virtual ~MedBay();

	void healCrew();
	void resupplyMedicalEquipment();

	int getMedicalEquipment();
	void setMedicalEquipment(int);

	virtual void setRoomInfo(string, int);
	
	virtual int getConsumables();
protected:
	int medicalEquipment;
};

#endif