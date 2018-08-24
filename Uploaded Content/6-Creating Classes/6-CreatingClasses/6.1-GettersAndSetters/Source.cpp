// Include iostream library. This allows us use of cout and cin.
#include <iostream>	

// Include string library. This allows us use of string
#include <string>

// Use the std namespace
using namespace std;

// CyberPet Class Definition
class CyberPet
{
// Public Functions
public:
	// A constructor that takes no arguments
	CyberPet()
	{
		name = "NoName";
		hunger = 0;
	}

	// Function to allow us to set the name of the pet
	void setName(string newName)
	{
		name = newName;
	}

	// Function to allow us to set the hunger of the pet
	void setHunger(int newHunger)
	{
		hunger = newHunger;
	}

	// Function to allow us to get the name of the pet
	string getName()
	{
		return name;
	}

	// Function to allow us to get the hunger of the pet
	int getHunger()
	{
		return hunger;
	}

// Private Variables
private:
	int hunger;		// An int to describe hunger
	string name;	// A string to contain the name
};

// The exercise doesn't require you to create and display an instance of the CyberPet class, this is just an example

void main()
{
	// Create an instance of the CyberPet
	CyberPet myPet;

	// Set the name and hunger
	myPet.setName("Mogget");
	myPet.setHunger(40);

	// Print the name and hunger
	cout << "My CyberPet is called " << myPet.getName() << ", and they are " << myPet.getHunger() << " towards being hungry." << endl;

	// Wait for user to press a key
	std::cin.get();
}