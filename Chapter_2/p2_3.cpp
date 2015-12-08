/*
	Write a program that reads a number and displays the square, cube, and fourth power.
*/

#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
	std::cout << "Enter a number: ";
	float input;
	std::cin >> input;

	// Two different ways to calculate powers: by using the multiplication operator * to calculate it,
	// or by using the pow() method from the <cmath> library.
	std::cout << input << " to the second power is: " << input * input << std::endl;
	std::cout << input << " to the third power is: " << input * input * input << std::endl;
	std::cout << input << " to the second power is: " << pow(input, 4) << std::endl;

	return 0;
}