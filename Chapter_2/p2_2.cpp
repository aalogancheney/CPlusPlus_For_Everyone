/*
	Write a program that computes and displays the circumference of a letter-size sheet 
	of paper and the length of its diagonal.
*/

#include <iostream>
#include <cmath> // For the square root and pow functions.

// Constants for inforamtion about a letter-size sheet of paper. 
const float LETTER_WIDTH_IN = 8.5f;
const float LETTER_HEIGHT_IN = 11.0f;

int main(int argc, char *argv[])
{
	// Calculates the perimeter and the diagonal.
	// sqrt(x) returns the square root of x.
	// pow(x, y) returns the number x raised to the power y.
	float perimeter = 2 * (LETTER_WIDTH_IN + LETTER_HEIGHT_IN);
	float diagonal = sqrt(pow(LETTER_HEIGHT_IN, 2) + pow(LETTER_WIDTH_IN, 2));

	std::cout << "The perimeter of a standard letter-size sheet of paper is " << perimeter << " inches." << std::endl;
	std::cout << "The diagonal of a standard letter-size sheet of paper is " << diagonal << " inches." << std::endl;

	return 0;
}