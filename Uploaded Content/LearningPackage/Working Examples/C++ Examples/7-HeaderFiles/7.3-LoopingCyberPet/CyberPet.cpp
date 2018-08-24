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

void CyberPet::setTiredness(int newTired)
{
	tired = newTired;
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

int CyberPet::getTiredness()
{
	return tired;
}

// Play, Sleep and Feed functions
void CyberPet::Play()
{
	// Increase happiness, hunger and tiredness
	happy = happy + 10;
	hunger = hunger + 5;
	tired = tired + 10;
}

void CyberPet::Feed()
{
	// Decrease hunger and happiness but increase tiredness
	happy = happy - 5;
	hunger = hunger - 10;
	tired = tired + 5;
}

void CyberPet::Sleep()
{
	// Decrease Happiness and tiredness but increase hunger
	happy = happy - 20;
	hunger = hunger + 10;
	tired = tired - 20;
}

// The print function
void CyberPet::printStats()
{
	// Print the name, hunger and happiness
	cout << "My CyberPet is called " << name << ", and they are " << hunger << " towards being hungry." << endl;
	cout << "They are " << happy << " happy and " << tired << " towards falling asleep." << endl;

	// The code below does the same thing, but uses the functions instead
	//cout << "My CyberPet is called " << getName() << ", and they are " << getHunger() << " towards being hungry." << endl;
	//cout << "They are " << getHappiness() << " happy and " << getTiredness() << " towards falling asleep." << endl;
}