#include "CyberPet.h"
#include <iostream>

CyberPet::CyberPet()
{
	name = "NoName";
	hunger = 0;
}

CyberPet::CyberPet(string setName)
{
	name = setName;
	hunger = 0;
}

CyberPet::CyberPet(string setName, int setHunger)
{
	name = setName;
	hunger = setHunger;
}

int CyberPet::getHunger()
{
	return hunger;
}

string CyberPet::getName()
{
	return name;
}

int CyberPet::getHappiness()
{
	return happiness;
}

void CyberPet::setHunger(int newHunger)
{
	hunger = newHunger;
}

void CyberPet::setName(string newName)
{
	name = newName;
}

void CyberPet::setHappiness(int newHappiness)
{
	happiness = newHappiness;
}

void CyberPet::printDetails()
{
	// Print '<name> is <happiness> happy and <hunger> hungry.'
	cout << name << " is " << happiness << " happy and " << hunger << " hungry." << endl;
}
