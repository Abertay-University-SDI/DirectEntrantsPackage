// Include so we can access the Vehicle class
#include "Vehicle.h"

int main()
{
	// Create a pointer to a Vehicle class
	Vehicle* classPointer;

	// Create a new instance using a custom constructor
	classPointer = new Vehicle("AB12 34C", 4.5f, 4, 5);

	// Delete the pointer after use
	delete classPointer;
}