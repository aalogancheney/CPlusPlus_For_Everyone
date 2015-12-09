/*
	Write a program that turns a 10-digit number into a string formatted as 
	a telephone number;
*/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	// Prompts the user to enter a phone number. Notice that the input type will be a string, not
	// an integer, so that we don't have to do a conversion from an integer into a string and
	// figure out any of the math conversions. 
    std::string phoneNumber;
    std::cout << "Enter a phone number (only numbers)." << std::endl;
    std::cin >> phoneNumber;

    std::string formattedPhoneNumber = "(" + phoneNumber.substr(0, 3) + ") "; // Area code
    formattedPhoneNumber += phoneNumber.substr(3, 3) + "-"; // First 3 digits
    formattedPhoneNumber += phoneNumber.substr(6, 4); // Last 4 digits.

    std::cout << formattedPhoneNumber << std::endl;

    return 0;
}