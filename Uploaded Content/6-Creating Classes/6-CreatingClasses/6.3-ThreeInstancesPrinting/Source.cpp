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

void main()
{
	// Create three instances of the CyberPet
	CyberPet myFirstPet;
	CyberPet mySecondPet;
	CyberPet myThirdPet;

	// Set the name and hunger of first pet
	myFirstPet.setName("Mogget");
	myFirstPet.setHunger(40);

	// Set the name and hunger of first pet
	mySecondPet.setName("Wilbur");
	mySecondPet.setHunger(10);

	// Set the name and hunger of first pet
	myThirdPet.setName("Dizzy");
	myThirdPet.setHunger(80);

	// Print the name and hunger
	cout << "My CyberPet is called " << myFirstPet.getName() << ", and they are " << myFirstPet.getHunger() << " towards being hungry." << endl;

	// Print the name and hunger
	cout << "My CyberPet is called " << mySecondPet.getName() << ", and they are " << mySecondPet.getHunger() << " towards being hungry." << endl;
	
	// Print the name and hunger
	cout << "My CyberPet is called " << myThirdPet.getName() << ", and they are " << myThirdPet.getHunger() << " towards being hungry." << endl;

	// Wait for user to press a key
	std::cin.get();
}