/*
	Write a program that transforms a given floating point value into
	some number of dollars and some number of cents. 
*/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	double price;
	int dollars, cents;

	std::cout << "Enter the price of a product." << std::endl;
	std::cin >> price;

	dollars = static_cast<int>(price); // Casts price to an integer, which truncates any decimal part.
	cents = (price - dollars) * 100 + 0.5; // 0.5 is added because of floating point rounding.

	std::cout << "That's " << dollars << " dollars and " << cents << " cents." << std::endl;

	return 0;
}