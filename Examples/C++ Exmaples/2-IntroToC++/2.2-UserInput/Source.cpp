// Include iostream library. This allows us use of cout and cin.
#include <iostream>	

// Use std namespace
using namespace std;

int main()
{
	// Create the input variables
	int firstInput = 0;
	int secondInput = 0;

	// Get the input and save it
	cin >> firstInput;
	cin >> secondInput;

	// Output result
	cout << "First input " << firstInput << " plus the second input " << secondInput << " is " << firstInput + secondInput;

	// End main
	return 1;
}