// Include so we can access the Vehicle class
#include "Vehicle.h"

// Include iostream so we can use cout and cin in this file
#include <iostream>

// Function Prototypes
void createVehicle();
void deleteVehicle();
void changeVehicle();

// Create a pointer to a Vehicle class
// This is global so all the functions can access. Try passing this as an argument for an extra challenge
Vehicle* classPointer = 0;

int main()
{
	// Create a boolean to keep the program running
	bool running = true;

	// Start a while loop
	while (running)
	{
		// Create char to hold input
		char userChoice;

		// Inform and ask for user input
		cout << "What would you like to do?" << endl << "'n' to create a Vehicle, 'd' to delete the Vehicle, 'c' to change the Vehicle or 'e' to exit." << endl;
		cin >> userChoice;

		// Pass choice into a switch statement
		switch (userChoice)
		{
		case 'n':
			// Create a new instance. Fail if one exists
			if (classPointer == 0)
			{
				// Call createVehicle function which handles all creation
				createVehicle();
			}
			else
			{
				// State that a Vehicle already exists and it needs to be deleted first
				cout << "A Vehicle already exists. You need to delete it before you can create a new one." << endl << endl;
			}
			break;

		case 'd':
			// Delete Vehicle, fail if none exist
			if (classPointer == 0)
			{
				// State that a Vehicle doesn't exists and it needs to be created first
				cout << "A Vehicle does not exist. You need to create one first." << endl << endl;
			}
			else
			{
				// Call deleteVehicle function which handles all deletion
				deleteVehicle();
			}
			break;

		case 'c':
			// Change Vehicle Stats, fail if none exist
			if (classPointer == 0)
			{
				// State that a Vehicle doesn't exists and it needs to be created first
				cout << "A Vehicle does not exist. You need to create one first." << endl << endl;
			}
			else
			{
				// Call changeVehicle function which handles all changes
				changeVehicle();
			}
			break;

		case 'e':
			// Check if a Vehicle exists and delete if it does
			if (classPointer != 0)
			{
				// Call deletion
				deleteVehicle();
			}

			// Set the running flag to false so the while loop ends
			running = false;
			break;

		default:
			// Not one of the options
			cout << "I did not recognise that choice. Please try again." << endl << endl;
			break;
		}
	}
}

void createVehicle()
{
	// Create variables to store the registration, length, wheel and seat numbers
	string reg;
	float length;
	int wheels, seats;

	// Ask for inputs
	cout << "Please enter the Registration: " << endl;
	cin >> reg;

	cout << "Please enter the length: " << endl;
	cin >> length;

	cout << "Please enter the wheel number: " << endl;
	cin >> wheels;

	cout << "Please enter the seat number: " << endl;
	cin >> seats;

	// Create a new instance
	classPointer = new Vehicle(reg, length, wheels, seats);

	// Complete message
	cout << "A new Vehicle has been created." << endl;
}

void deleteVehicle()
{
	// Delete the class
	delete classPointer;

	// Complete message
	cout << "The Vehicle has been deleted." << endl;
}

void changeVehicle()
{
	// Create char for user input
	char userInput;

	// Create variables to store the registration, length, wheel and seat numbers
	string reg;
	float length;
	int wheels, seats;

	// Ask for what they want to change
	cout << "Please choose what you want to change. 'r' for Registration, 'l' for length, 'w' for wheels, 's' for seats." << endl;

	switch (userInput)
	{
	case 'r':
		// Ask for the new registration
		cout << "Please enter the new Registration: " << endl;
		cin >> reg;

		// Update registration
		classPointer->setRegistration(reg);

		// Complete message
		cout << "The new Vehicle registration is now " << classPointer->getRegistration() << endl;
		break;

	case 'l':
		// Ask for the new registration
		cout << "Please enter the new length: " << endl;
		cin >> length;

		// Update registration
		classPointer->setLength(length);

		// Complete message
		cout << "The new Vehicle length is now " << classPointer->getLength() << endl;
		break;

	case 'w':
		// Ask for the new registration
		cout << "Please enter the wheel number: " << endl;
		cin >> wheels;

		// Update registration
		classPointer->setNumberWheels(wheels);

		// Complete message
		cout << "The new number of wheels in the Vehicle is: " << classPointer->getNumberWheels() << endl;
		break;

	case 's':
		// Ask for the new registration
		cout << "Please enter the seat number: " << endl;
		cin >> seats;

		// Update registration
		classPointer->setNumberSeats(seats);

		// Complete message
		cout << "The new number of seats in the Vehicle is: " << classPointer->getNumberSeats() << endl;
		break;

	default:
		// Unknown choice
		cout << "I did not recognise that choice. No changes have been made." << endl;
		break;
	}
}