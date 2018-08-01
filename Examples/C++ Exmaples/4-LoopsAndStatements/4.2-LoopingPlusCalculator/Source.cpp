// Include iostream library. This allows us use of cout and cin.
#include <iostream>

// Use std namespace
using namespace std;

int main()
{
	// Create inputs
	int inputOne = 0;
	int inputTwo = 0;

	// Create check to see if the program is still running
	bool programRunning = true;

	while (programRunning)
	{
		// Get Inputs
		cout << "Please input you first value for the calculator: " << endl;
		cin >> inputOne;

		cout << "Please input your second value for the calculator: " << endl;
		cin >> inputTwo;

		if (inputOne == -1)
		{
			programRunning = false;
		}
		else if (inputTwo == -1)
		{
			programRunning = false;
		}
		else
		{
			// Print the result
			cout << "The result of " << inputOne << " plus " << inputTwo << " is: " << inputOne + inputTwo << endl;
		}
	}

	// End of program
	return 1;
}