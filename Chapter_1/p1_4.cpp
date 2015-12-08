/*
	Write a program that prints the sum of the first ten positive integers.
*/

#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "The sum of the first 10 integers is ";

	// Calculates the sum of the first 10 positive integers in a single line. 
	int sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	std::cout << sum << std::endl;

	return 0;
}