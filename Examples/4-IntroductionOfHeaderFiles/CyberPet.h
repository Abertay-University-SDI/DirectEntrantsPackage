#ifndef _CYBERPET_H_
#define _CYBERPET_H_

#include <string>

using namespace std;

class CyberPet
{
public:
	// Default constructor
	CyberPet();
	// Constructor with one argument, name of pet
	CyberPet(string setName);
	// Constructor with two arguments, name and hunger of pet
	CyberPet(string setName, int setHunger);

	// Getters
	int getHunger();
	string getName();
	int getHappiness();

	// Setters
	void setHunger(int newHunger);
	void setName(string newName);
	void setHappiness(int newHappiness);

	// Print details
	void printDetails();

private:
	int hunger;			// How hungry the pet is
	int happiness;		// How happy the pet is
	string name;		// Name of the pet
};

#endif