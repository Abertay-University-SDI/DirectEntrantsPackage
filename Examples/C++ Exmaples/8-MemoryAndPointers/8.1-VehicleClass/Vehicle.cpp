// Include so we can access the Vehicle class
#include "Vehicle.h"

// Constructor
Vehicle::Vehicle()
{

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