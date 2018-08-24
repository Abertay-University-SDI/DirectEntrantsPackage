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
	switch (inputNumber)
	{
	case 1:
		// Sentance 1
		cout << "This is the first sentance." << endl;
		break;
	case 2:
		// Sentance 2
		cout << "This is the second sentance." << endl;
		break;
	case 3:
		// Sentance 3
		cout << "This happens to be the third sentance." << endl;
		break;
	case 4:
		// Sentance 4
		cout << "This is the fourth sentance." << endl;
		break;
	case 5:
		// Sentance 5
		cout << "This, surprisingly, is the fifth sentance." << endl;
		break;
	case 6:
		// Sentance 6
		cout << "This one is number six." << endl;
		break;
	case 7:
		// Sentance 7
		cout << "Seven comes after six." << endl;
		break;
	case 8:
		// Sentance 8
		cout << "Number eight, we're nearly at the end." << endl;
		break;
	case 9:
		// Sentance 9
		cout << "Nine" << endl;
		break;
	case 10:
		// Sentance 10
		cout << "At the end, with number ten." << endl;
		break;
	default:
		// Last potential sentance if it is not between 1 - 10
		cout << "That is not a number we programmed." << endl;
		break;
	}

	// Get user input to close program
	cin.get();

	// End of program
	return 1;
}