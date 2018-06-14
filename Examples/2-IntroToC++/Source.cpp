// Include iostream library. This allows us use of cout and cin.
#include <iostream>	

int main()
{
	// Print out some text at the start
	std::cout << "Hello World!" << " I am a program that prints a lot of text";
	std::cout << std::endl << std::endl;	// Two end lines
	std::cout << "I need you to give me a number between 0 and 100" << std::endl;

	// Create an int to store our input
	int userInput = 0;

	// Get the input from the user
	std::cin >> userInput;

	// Add some new lines between the input and the next set of output
	std::cout << std::endl << std::endl;

	// Print different messages depending on how big or small the user input is
	if (userInput > 100)
	{
		std::cout << "Hey, you gave me a number greater than 100!" << std::endl;
	}
	else if (userInput < 0)
	{
		std::cout << "Hey, you gave me a number less than 0!" << std::endl;
	}
	else
	{
		std::cout << "Thank you for a valid number." << std::endl;
	}

	// We have put data into the buffer with our last use of std:cin.
	// This commnad ignores everything in the buffer, essentially flushing it of all previous data
	// Behind the scenes, this command tells the input buffer to skip everything up to the next newline in the text
	std::cin.ignore(INT_MAX, '\n');

	// Wait for user to press a key
	std::cin.get();

	// End of main
	return 0;
}