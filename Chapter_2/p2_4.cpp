/*
	Write a program that prompts the user for two integers and then prints:
	1. The sum
	2. The difference
	3. The product
	4. The average
*/

#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "Enter two numebrs: ";
	float number1;
	float number2;
	std::cin >> number1 >> number2; // Gets the next two numbers entered from the console.

	// Prints different arethmetic expressions and the results. 
	std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
	std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
	std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;

	// Calculates the average and displays it to the user. 
	std::cout << "The average of " << number1 << " and " << number2 << " is: " << (number1 + number2) / 2 << std::endl;

	return 0;
}