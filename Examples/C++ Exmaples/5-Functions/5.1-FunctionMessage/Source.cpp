// Include iostream library. This allows us use of cout and cin.
#include <iostream>

// Use std namespace
using namespace std;

// Print message function.
// Return type is void - returns nothing
// Function name is PrintMessage
void PrintMessage(/*No arguments so this is empty*/)
{
	// Function code goes here
	cout << "Hello, I am a function message" << endl;
}

int main()
{
	// Call the PrintMessage function
	PrintMessage();

	// Wait for user input
	cin.get();

	// End of program
	return 0;
}