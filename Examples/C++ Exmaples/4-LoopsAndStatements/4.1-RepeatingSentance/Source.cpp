// Include iostream library. This allows us use of cout and cin.
#include <iostream>

// Use std namespace
using namespace std;

int main()
{
	// Create a for loop. Start from 0 and count up to 100
	for (int i = 0; i < 100; i++)
	{
		// Print out sentance
		cout << "Hello, I am a sentance!" << endl;
	}

	// Wait for user input
	cin.get();

	// End of program
	return 0;
}