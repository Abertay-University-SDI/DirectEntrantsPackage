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

	// Function to allow us to set the happiness of the pet
	void setHappiness(int newHappy)
	{
		happy = newHappy;
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

	// Function to allow us to get the happiness of the pet
	int getHappiness()
	{
		return happy;
	}

	// Function to print the name, hunger and happiness of the pet
	void printStats()
	{
		// Print the name, hunger and happiness
		cout << "My CyberPet is called " << getName() << ", and they are " << getHunger() << " towards being hungry." << endl;
		cout << "They are " << getHappiness() << " happy." << endl;
	}

	// Private Variables
private:
	int happy;		// An int to describe happiness
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
	myFirstPet.setHappiness(60);

	// Set the name and hunger of first pet
	mySecondPet.setName("Wilbur");
	mySecondPet.setHunger(10);
	mySecondPet.setHappiness(100);

	// Set the name and hunger of first pet
	myThirdPet.setName("Dizzy");
	myThirdPet.setHunger(80);
	myThirdPet.setHappiness(45);

	// Print the stats of each pet
	myFirstPet.printStats();
	mySecondPet.printStats();
	myThirdPet.printStats();

	// Wait for user to press a key
	std::cin.get();
}