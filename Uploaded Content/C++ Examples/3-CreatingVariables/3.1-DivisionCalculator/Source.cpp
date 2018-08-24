// Include iostream library. This allows us use of cout and cin.
#include <iostream>

// Include iomanip so we can use setprecision(n)
#include <iomanip>

// Use std namespace
using namespace std;

int main()
{
	// Create inputs
	float inputOne = 0.f;
	float inputTwo = 0.f;

	// Get Inputs
	cout << "Please input you first value for the calculator: " << endl;
	cin >> inputOne;

	cout << "Please input your second value for the calculator: " << endl;
	cin >> inputTwo;

	// Print the result
	cout << "The result of " << inputOne << " divided by " << inputTwo << " is: " << setprecision(3) << inputTwo / inputOne << endl;

	// End of program
	return 1;
}