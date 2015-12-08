/*
	Write a program that prompts the user for a measurement in meters and then
	cnoverts it to miles, feet, and inches.
*/

#include <iostream>

// Constants for converting between meters and other distances. 
const float METERS_PER_MILE = 1609.34f;
const float METERS_PER_FOOT = 0.3048f;
const float METERS_PER_INCH = 0.0254f;

int main(int argc, char *argv[])
{
	std::cout << "Enter a distance measurement in meters: ";
	float distanceInMeters;
	std::cin >> distanceInMeters;

	// Performs the conversions between different units of measurement. These variables are
	// declared as const so they cannot be modified later in the program. 
	const float distanceInMiles = distanceInMeters / METERS_PER_MILE;
	const float distanceInFeet = distanceInMeters / METERS_PER_FOOT;
	const float distanceInInches = distanceInMeters / METERS_PER_INCH;

	// Displays the information to a user. 
	std::cout << distanceInMeters << " meters = " << distanceInMiles << " miles." << std::endl;
	std::cout << distanceInMeters << " meters = " << distanceInFeet << " feet." << std::endl;
	std::cout << distanceInMeters << " meters = " << distanceInInches << " inches." << std::endl;

	return 0;
}