// Include so we can access the Vehicle class
#include "Vehicle.h"

// Include iostream so we can use cout
#include <iostream>

// Constructors
Vehicle::Vehicle()
{
	registration = "NO REG";
	length = 0.0f;
	seats = 0;
	wheels = 0;
}

// Constructor with two arguments for vehicle length and registration
Vehicle::Vehicle(string reg, float length)
{
	registration = reg;
	length = length;
	seats = 0;
	wheels = 0;
}

// Constructor with four arguments for all variables in class
Vehicle::Vehicle(string reg, float length, int wheels, int seats)
{
	registration = reg;
	length = length;
	seats = seats;
	wheels = wheels;
}

// All Setters
void Vehicle::setNumberSeats(int newSeats)
{
	seats = newSeats;
}

void Vehicle::setNumberWheels(int newWheels)
{
	wheels = newWheels;
}

void Vehicle::setLength(float newLength)
{
	length = newLength;
}

void Vehicle::setRegistration(string newReg)
{
	registration = newReg;
}

// All Getters
int Vehicle::getNumberSeats()
{
	return seats;
}

int Vehicle::getNumberWheels()
{
	return wheels;
}

float Vehicle::getLength()
{
	return length;
}

string Vehicle::getRegistration()
{
	return registration;
}

// Print data function
void Vehicle::printVehicleData()
{
	cout << "Vehicle Registration: " << registration << endl <<
			"Vehicle Length: " << length << endl <<
			"Number of Wheels: " << wheels << endl <<
			"Number of Seats: " << seats << endl;
}