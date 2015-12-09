/*
	Write a program that reads a nuber between 1000 and 999999 and prints 
	that number back to the user with a comma separating the right places
	in the number. 
*/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string number;
	std::cout << "Enter a number between 1000 and 999999: ";
	std::cin >> number;

	// Builds a new string by starting from the back of the string.  
	std::string formattedNumber = "," + number.substr(number.size() - 3, 3);
	number = number.substr(0, number.size() - 3);
	formattedNumber = number + formattedNumber;

	std::cout << "The formatted number is " << formattedNumber << std::endl;

	return 0;
}