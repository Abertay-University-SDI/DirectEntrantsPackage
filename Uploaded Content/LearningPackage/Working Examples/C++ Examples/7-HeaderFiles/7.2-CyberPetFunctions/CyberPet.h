#pragma once

// We are using strings in this file so we need to include the string library
#include <string>

// Use the std namespace
using namespace std;

// CyberPet Class Definition
// Remember in the Header we just say these functions exist, we will describe what they do in the 
// .cpp file.
class CyberPet
{
	// Public Functions
public:
	// A constructor that takes no arguments
	CyberPet();

	// All the 'set' functions
	void setName(string newName);
	void setHunger(int newHunger);
	void setHappiness(int newHappy);
	void setTiredness(int newTired);

	// All the 'get' functions
	string getName();
	int getHunger();
	int getHappiness();
	int getTiredness();

	// Our Print function
	void printStats();

	// Play, Feed and Sleep function
	void Play();
	void Feed();
	void Sleep();

	// Private Variables
private:
	int happy;		// An int to describe happiness
	int hunger;		// An int to describe hunger
	int tired;		// An int to describe tiredness
	string name;	// A string to contain the name
};

