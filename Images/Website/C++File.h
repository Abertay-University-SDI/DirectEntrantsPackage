#include <iostream>	

int main()
{
	// Array of characters
	char helloMessage[]{ 'H','e','l','l','o',' ','W','o','r','l','d','!' };
	// Print the message
	std::cout << helloMessage << std::endl;
	// Wait for user input
	std::cin.get();
	// End program
	return 0;
}