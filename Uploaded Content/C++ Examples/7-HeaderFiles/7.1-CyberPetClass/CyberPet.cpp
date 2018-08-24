// Include the header to the CyberPet header file so we can access it
#include "CyberPet.h"

// We need the iostream library as we use cout in this file. 
#include <iostream>

/*
 * Notice how we don't need to include <string> in this file. We have declared it in the header (.h) file
 * and included that, which already has the #include<string> line. We also don't need to have
 * using namespace std; as it is also delcared in the header file. We can still add these again if we want, but
 * it serves no real purpose.
 */

// Our constructor
CyberPet::CyberPet()
{
}

// Our Setters
void CyberPet::setName(string newName)
{
	name = newName;
}

void CyberPet::setHunger(int newHunger)
{
	hunger = newHunger;
}

void CyberPet::setHappiness(int newHappy)
{
	happy = newHappy;
}

// Our Getters
string CyberPet::getName()
{
	return name;
}

int CyberPet::getHunger()
{
	return hunger;
}

int CyberPet::getHappiness()
{
	return happy;
}

// The print function
void CyberPet::printStats()
{
	// Print the name, hunger and happiness
	cout << "My CyberPet is called " << name << ", and they are " << hunger << " towards being hungry." << endl;
	cout << "They are " << happy << " happy." << endl;

	// The code below does the same thing, but uses the functions instead
	//cout << "My CyberPet is called " << getName() << ", and they are " << getHunger() << " towards being hungry." << endl;
	//cout << "They are " << getHappiness() << " happy." << endl;
}