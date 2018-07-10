// Include iostream library. This allows us use of cout and cin.
#include <iostream>	
#include <string>

using namespace std;

class CyberPet
{
public:
	// Default constructor
	CyberPet()
	{
		name = "NoName";
		hunger = 0;
	}
	// Constructor with one argument, name of pet
	CyberPet(string setName)
	{
		name = setName;
		hunger = 0;
	}
	// Constructor with two arguments, name and hunger of pet
	CyberPet(string setName, int setHunger)
	{
		name = setName;
		hunger = setHunger;
	}
	int getHunger()
	{
		return hunger;
	}
	string getName()
	{
		return name;
	}
	int getHappiness()
	{
		return happiness;
	}
	void setHunger(int newHunger)
	{
		hunger = newHunger;
	}
	void setName(string newName)
	{
		name = newName;
	}
	void setHappiness(int newHappiness)
	{
		happiness = newHappiness;
	}
	void printDetails()
	{
		// Print '<name> is <happiness> happy and <hunger> hungry.'
		cout << name << " is " << happiness << " happy and " << hunger << " hungry." << endl;
	}
private:
	int hunger;			// How hungry the pet is
	int happiness;		// How happy the pet is
	string name;		// Name of the pet
};

void main()
{
	// Create a pet with default constructor
	CyberPet pet_one;
	pet_one.setName("Chocho");
	pet_one.setHunger(30);
	// Creates a pet with the name Billy
	CyberPet pet_two("Billy");
	pet_two.setHunger(50);
	// Creates a pet with the name Marvin and 100 hunger
	CyberPet pet_three("Marvin", 100);

	// Set happiness values for all the pets
	pet_one.setHappiness(70);
	pet_two.setHappiness(60);
	pet_three.setHappiness(50);

	// Print the details of all the pets to the console.
	pet_one.printDetails();
	pet_two.printDetails();
	pet_three.printDetails();
}