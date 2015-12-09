/*
	Write a program that helps a person decide whether to buy a hybrid car
	or not. The program inputs should be:

	1. The cost of a new car.
	2. The estimates miles driven per year.
	3. The estimated gas price.
	4. The estimated miles per gallon.
	5. The estimated resale value after 5 years.

	The program will compute the cost of owning a car for 5 years. Running
	this program twice with information for two different cars will show
	the difference between two cars. 
*/

#include <iostream>
#include <string>

// Prompts for getting information from the user. 
const std::string PROGRAM_DESCRIPTION = "This program will estimate the total cost of owning a car for 5 years.";
const std::string COST_PROMPT = "Enter the cost of the car (in dollars): ";
const std::string MILES_DRIVEN_PROMPT = "Enter the estimated number of miles driven per year: ";
const std::string GAS_PRICE_PROMPT = "Enter the estimated gas price (in dollars): ";
const std::string MPG_PROMPT = "Enter the estimated miles per gallon: ";
const std::string RESALE_PROMPT = "Enter the estimated resale value after 5 years (in dollars): ";

// The total number of years of ownership we are considering.
const int NUMBER_OF_YEARS = 5;

int main(int argc, char *argv[])
{
	std::cout << PROGRAM_DESCRIPTION << std::endl;
	float cost, milesDrivenPerYear, gasPricePerGallon, milesPerGallon, resaleValue;
	
	std::cout << COST_PROMPT;
	std::cin >> cost;

	std::cout << MILES_DRIVEN_PROMPT;
	std::cin >> milesDrivenPerYear;

	std::cout << GAS_PRICE_PROMPT;
	std::cin >> gasPricePerGallon;

	std::cout << MPG_PROMPT;
	std::cin >> milesPerGallon;

	std::cout << RESALE_PROMPT;
	std::cin >> resaleValue;

	// Calculates the total cost of gas over 5 years and figures that into the rest of the cost. 
	const float totalGasCost = milesDrivenPerYear * (1 / milesPerGallon) * gasPricePerGallon * NUMBER_OF_YEARS;
	const float totalCost = cost + totalGasCost - resaleValue;

	std::cout << "The total 5 year cost is: $" << totalCost << std::endl;

	return 0;
}