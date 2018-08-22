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

// Subtract function. Takes two int arguments and returns the subtraction
int subtractionFunc(int numberOne, int numberTwo)
{
	// Create a variable and initialise it to be equal to the subtraction
	int result = numberOne - numberTwo;

	// Return result
	return result;
}

// Multiply function. Takes two int arguments and returns the multiplication
int multiplyFunc(int numberOne, int numberTwo)
{
	// Create a variable and initialise it to be equal to the multiplication
	int result = numberOne * numberTwo;

	// Return result
	return result;
}

// Divide function. Takes two int arguments and returns the division
int divideFunc(int numberOne, int numberTwo)
{
	// Create a variable and initialise it to be equal to the division
	int result = numberOne / numberTwo;

	// Return result
	return result;
}

int main()
{
	// Create inputs
	int inputOne = 0;
	int inputTwo = 0;
	char inputThree = ' ';

	// Create check to see if the program is still running
	bool programRunning = true;

	while (programRunning)
	{
		// Get Inputs
		cout << "Please input you first value for the calculator: " << endl;
		cin >> inputOne;

		cout << "Please input your second value for the calculator: " << endl;
		cin >> inputTwo;

		cout << "Please input the operation you want to perform: " << endl;

		// Check if inputOne or inputTwo is zero
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
			// Create value for output and initialise to zero
			int output = 0;

			// Pass inputThree into a switch statement so we can choose the correct function to call.
			switch (inputThree)
			{
			// Addition
			case '+':
				output = additionFunc(inputOne, inputTwo);
				break;

			// Subtraction
			case '-':
				output = subtractionFunc(inputOne, inputTwo);
				break;

			// Multiplication
			case '*':
				output = multiplyFunc(inputOne, inputTwo);
				break;

			// Division
			case '/':
				output = divideFunc(inputOne, inputTwo);
				break;

			// Default in-case the user puts in a different character, make output equal to 0
			default:
				output = 0;
				break;
			}

			// Print the message
			cout << "The result of " << inputOne << " plus " << inputTwo << " is: " << output << endl;
		}
	}

	// End of program
	return 1;
}