// Include iostream library. This allows us use of cout and cin.
#include <iostream>

// Use std namespace
using namespace std;

int main()
{
	// Create input
	int inputNumber = 0;

	// Get choice
	cin >> inputNumber;

	// If statements to decide what sentance
	if (inputNumber == 1)
	{
		// Sentance 1
		cout << "This is the first sentance." << endl;
	}
	else if (inputNumber == 2)
	{
		// Sentance 2
		cout << "This is the second sentance." << endl;
	}
	else if (inputNumber == 3)
	{
		// Sentance 3
		cout << "This happens to be the third sentance." << endl;
	}
	else if (inputNumber == 4)
	{
		// Sentance 4
		cout << "This is the fourth sentance." << endl;
	}
	else if (inputNumber == 5)
	{
		// Sentance 5
		cout << "This, surprisingly, is the fifth sentance." << endl;
	}
	else if (inputNumber == 6)
	{
		// Sentance 6
		cout << "This one is number six." << endl;
	}
	else if (inputNumber == 7)
	{
		// Sentance 7
		cout << "Seven comes after six." << endl;
	}
	else if (inputNumber == 8)
	{
		// Sentance 8
		cout << "Number eight, we're nearly at the end." << endl;
	}
	else if (inputNumber == 9)
	{
		// Sentance 9
		cout << "Nine" << endl;
	}
	else if (inputNumber == 10)
	{
		// Sentance 10
		cout << "At the end, with number ten." << endl;
	}
	else
	{
		// Last potential sentance if it is not between 1 - 10
		cout << "That is not a number we programmed." << endl;
	}

	// Get user input to close program
	cin.get();

	// End of program
	return 1;
}