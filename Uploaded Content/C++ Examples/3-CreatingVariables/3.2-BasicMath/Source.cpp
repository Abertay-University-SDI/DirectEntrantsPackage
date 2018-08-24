// Include iostream library. This allows us use of cout and cin.
#include <iostream>

// Include iomanip so we can use setprecision(n)
#include <iomanip>

// Use std namespace
using namespace std;

int main()
{
	// Create variables
	float numberOne = 10.f;
	float numberTwo = 5.f;
	float addition = numberOne + numberTwo;
	float subtraction = numberOne - numberTwo;
	float multiplication = numberOne * numberTwo;
	float division = numberOne / numberTwo;

	// Addition
	cout << "Adding value " << numberOne << " to " << numberTwo << " is: " << addition << endl;

	// Subtraction
	cout << "Subtracting value " << numberOne << " to " << numberTwo << " is: " << subtraction << endl;

	// Multiplication
	cout << "Multiplying value " << numberOne << " to " << numberTwo << " is: " << setprecision(4) << multiplication << endl;

	// Division
	cout << "Dividing value " << numberOne << " to " << numberTwo << " is: " << setprecision(3) << division << endl;

	// Wait for user input
	cin.get();

	// End of program
	return 1;
}