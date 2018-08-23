// Include iostream library. This allows us use of cout and cin.
#include <iostream>	

// Include the CyberPet class file we have created
#include "CyberPet.h"

void main()
{
	// Create an instance of the CyberPet
	CyberPet myPet;

	// Create four variables to hold the Pet starting data
	string name;
	int happy, tired, hunger;

	// Get user input for all four variables
	cout << "Please enter your pets name:" << endl;
	cin >> name;

	cout << "Please enter your pets starting hunger:" << endl;
	cin >> hunger;

	cout << "Please enter your pets starting tiredness:" << endl;
	cin >> tired;

	cout << "Please enter your pets starting happiness:" << endl;
	cin >> happy;

	// Set the stats of the pet based off user input
	myPet.setName(name);
	myPet.setHunger(hunger);
	myPet.setHappiness(happy);
	myPet.setTiredness(tired);
	
	// Create a boolean that keeps a while loop running
	bool running = true;

	// Start a while loop for the main body of the app
	while (running)
	{
		// Create a string to hold user input
		string input;

		// Ask for input
		cout << "Do one of the following with your pet: Feed, Sleep, or Play. Type Exit to close the program." << endl;
		cin >> input;

		// If user inputs "Play"
		if (input == "Play")
		{
			// Play with pet and print stats
			myPet.Play();
			myPet.printStats();
		}
		// If user inputs "Feed"
		else if (input == "Feed")
		{
			// Feed the pet and print stats
			myPet.Feed();
			myPet.printStats();
		}
		// If user inputs "Sleep"
		else if (input == "Sleep")
		{
			// Make the pet rest and print stats
			myPet.Sleep();
			myPet.printStats();
		}
		// If user inputs "Exit"
		else if (input == "Exit")
		{
			// Print message and set the boolean keeping the while loop going to false
			cout << "Closing the program." << endl;
			running = false;
		}
		else
		{
			// Print message if none of the options above
			cout << "That's not a command I recognise. Try again." << endl;
		}
	}
}