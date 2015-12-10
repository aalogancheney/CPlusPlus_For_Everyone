/*
	Write a program that reads a temperature value and the letter C for celcius or
	F for farenheit. Print whether water is liquid, solid, or gaseous at the given
	temperatire at sea level.
*/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	float temperature;
	std::cout << "Enter a temperature: ";
	std::cin >> temperature;

	std::string unit;
	std::cout << "Enter `C` for celcius or `F` for farenheit: ";
	std::cin >> unit;

	// Convert to celcius if not already in celcius. 
	if(unit == "f" || unit == "F")
	{
		temperature = (5.0f / 9.0f) * (temperature - 32.0f);
	}

	// if-else construction for the three different states of water. 
	if(temperature > 100)
	{
		std::cout << "Water is a gas at that temperature." << std::endl;
	}
	else if(temperature > 0 && temperature <= 100)
	{
		std::cout << "Water is a liquid at that temperature." << std::endl;
	}
	else
	{
		std::cout << "Water is a solid at that temperature." << std::endl;
	}

	return 0;
}