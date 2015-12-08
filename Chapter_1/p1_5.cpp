/*
	Write a program that prints the product of the first 10 positive integers.
*/

#include <iostream>

int main(int argc, char *argv[])
{
	// Asks the user how many integers to multiply and gets the input from the terminal. 
	std::cout << "How many integers would you like to multiply? ";
	int numberOfIntegers;
	std::cin >> numberOfIntegers;

	// Uses a for loop to calculate the product, which is dependent on the user input. This can also
	// be used in the previous problem to calculate the sum of the first i integers. 
	int product = 1;
	for(int i = 1; i < numberOfIntegers + 1; ++i)
	{
		product *= i;
	}
	std::cout << product << std::endl;

	return 0;
}