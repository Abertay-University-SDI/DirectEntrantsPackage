// Include iostream library. This allows us use of cout and cin.
#include <iostream>	

// Include the CyberPet class file we have created
#include "CyberPet.h"

void main()
{
	// Create an instance of the CyberPet
	CyberPet myPet;

	// Set the name and hunger of the pet
	myPet.setName("Mogget");
	myPet.setHunger(40);
	myPet.setHappiness(60);

	// Print the stats of the pet
	myPet.printStats();

	// Wait for user to press a key
	std::cin.get();
}