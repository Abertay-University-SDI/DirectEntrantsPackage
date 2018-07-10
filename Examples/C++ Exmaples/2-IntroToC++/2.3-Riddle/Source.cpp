// Include iostream library. This allows us use of cout and cin.
#include <iostream>

// Use std namespace
using namespace std;

int main()
{
	// Print the riddle
	cout << "On my way to St. Ives," << endl;
	cout << "I met a man with seven wives." << endl;
	cout << "Each wife had seven sacks," << endl;
	cout << "Each sack had seven cats," << endl;
	cout << "Each cat had seven kits." << endl;
	cout << "Kits, cats, sacks, and wives," << endl;
	cout << "How many were going to St. Ives?" << endl;

	// Create counters for all the items in the riddle
	int myself = 1;
	int man = 1;
	int wives = 7;
	int sacks = 7;
	int cats = 7;
	int kittens = 7;

	// Calculate the result
	int result = myself + man + (wives*sacks*cats*kittens);

	// Print the result
	cout << endl << "The number of people heading to St. Ives is " << result << ".";

	// Wait for input from the user
	cin.get();

	// End the program
	return 1;

}