/*
	Write a program that prompts the user for a measurement in meters
	 and then prints:
	 1. The area and circumference of a circle with that radius.
	 2. The volume and surface area of a sphere with that radius.
*/

#include <iostream>

const float PI = 3.14159265f;

int main(int argc, char *argv[])
{
	std::cout << "Enter a radius: ";
	float radius;
	std::cin >> radius;

	// Calculates the area and circumference of a circle with the given radius.
	const float circleArea = PI * radius * radius;
	const float circleCircumference = 2 * PI * radius;

	// Calculates the volume and surface area of a circle with the given radius. 
	const float sphereVolume = (4.0f / 3.0f) * PI * radius * radius * radius;
	const float sphereSurfaceArea = 4.0f * PI * radius * radius;

	std::cout << "A circle with radius " << radius << " has an area of " << circleArea << " units." << std::endl;
	std::cout << "A circle with radius " << radius << " has a circumference of " << circleCircumference << " units." << std::endl;
	std::cout << "A sphere with radius " << radius << " has a volume of " << sphereVolume << " units." << std::endl;
	std::cout << "A sphere with radius " << radius << " has a surface area of " << sphereSurfaceArea << " units." << std::endl;

	return 0;
}