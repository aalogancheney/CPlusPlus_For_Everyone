/*
	The boiling point of water drops by about one degree centigrade for every
	300 meters (or 1000 feet) of altitude. Improve the program in p3_1.cpp to 
	allow the user to supply the altitude in meters or feet.
*/

#include <iostream>

const int ALTITUDE_FACTOR_METERS = 300;
const float METERS_PER_FOOT = 0.3048f;

int main(int argc, char *argv[])
{
	float temperature;
	std::cout << "Enter a temperature: ";
	std::cin >> temperature;

	std::string unitTemperature;
	std::cout << "Enter `C` for celcius or `F` for farenheit: ";
	std::cin >> unitTemperature;

	float altitude;
	std::cout << "Enter the altitude: ";
	std::cin >> altitude;

	std::string unitHeight;
	std::cout << "Enter `m` for meters or `f` for feet: ";
	std::cin >> unitHeight;

	// Convert to celcius if not already in celcius. 
	if(unitTemperature == "f" || unitTemperature == "F")
	{
		temperature = (5.0f / 9.0f) * (temperature - 32.0f);
	}

	// Convert to meters if not already in meters.
	if(unitHeight == "f" || unitHeight == "F")
	{
		altitude = METERS_PER_FOOT * altitude;
	}

	// Adjusts the temperature based on the altitude. 
	temperature = temperature + static_cast<int>(altitude / ALTITUDE_FACTOR_METERS);

	// if-else construction for the three different states of water. 
	if(temperature > 100)
	{
		std::cout << "Water is a gas at that temperature and altitude." << std::endl;
	}
	else if(temperature > 0 && temperature <= 100)
	{
		std::cout << "Water is a liquid at that temperature and altitude." << std::endl;
	}
	else
	{
		std::cout << "Water is a solid at that temperature and altitude." << std::endl;
	}	

	return 0;
}