/*
	Write a program that prompts the user for the lengths of the sides
	of a rectangle and then prints:
	1. The area and perimeter of the rectangle.
	2. The length of the diagonal.
*/

#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
	// Prompts the user and gets information. 
	std::cout << "Enter the width and height of a rectangle." << std::endl;
	float width, height;
	std::cout << "Width: ";
	std::cin >> width;
	std::cout << "Height: ";
	std::cin >> height;

	// Calculates the different parts of the problem.
	const float perimeter = 2 * (width + height);
	const float area = width * height;
	const float diagonal = sqrt(pow(width, 2) + pow(height, 2));

	// Displays the results to the user. 
	std::cout << "The perimeter is: " << perimeter << std::endl;
	std::cout << "The area is: " << area << std::endl;
	std::cout << "The diagonal is: " << diagonal << std::endl;

	return 0;
}