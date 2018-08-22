// Include iostream library. This allows us use of cout and cin.
#include <iostream>

// Use std namespace
using namespace std;

// Add function. Takes two int arguments and returns the addition
int additionFunc(int numberOne, int numberTwo)
{
	// Create a variable and initialise it to be equal to the addition
	int result = numberOne + numberTwo;

	// Return result
	return result;
}

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
			// Create a value and initialise it to the return value of additionFunc
			int output = additionFunc(inputOne, inputTwo);

			// Print the message
			cout << "The result of " << inputOne << " plus " << inputTwo << " is: " << output << endl;
		}
	}

	// End of program
	return 1;
}