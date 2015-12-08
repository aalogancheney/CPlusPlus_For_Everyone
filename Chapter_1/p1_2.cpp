/*
	Write a program that gets input from a user and prints a message after getting input. 
*/

#include <iostream>
#include <string> // Used for the std::string variable type. 

int main(int argc, char *argv[])
{
	std::cout << "Hello, my name is Hal!" << std::endl;
	std::cout << "What would you like me to do?" << std::endl;

	// Declares a string to store input from the user and then extracts that input
	// from the user using the >> operator on the std::cin input stream. 
	std::string input;
	std::cin >> input;

	std::cout << "I am sorry, I cannot do that." << std::endl; 

	return 0;
}