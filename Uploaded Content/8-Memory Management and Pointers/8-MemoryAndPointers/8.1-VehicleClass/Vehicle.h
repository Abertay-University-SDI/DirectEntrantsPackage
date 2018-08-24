#pragma once	// Check worksheet 7 - Introduction to Header Files to see what this is

// Include strings so we can use them
#include <string>

// Use the std:: namespace
using namespace std;

// Declare the Vehicle class
class Vehicle
{
	// Public functions
public:
	// Constructor
	Vehicle();

	// Setters
	void setNumberSeats(int newSeats);
	void setNumberWheels(int newWheels);
	void setLength(float newLength);
	void setRegistration(string newReg);

	// Getters
	int getNumberSeats();
	int getNumberWheels();
	float getLength();
	string getRegistration();

	// Private variables
private:
	int seats;				// Number of seats
	int wheels;				// Number of wheels
	float length;			// Length of vehicle
	string registration;	// Vehicle registration
};

