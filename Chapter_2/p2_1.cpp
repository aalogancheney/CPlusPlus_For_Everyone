/*
	Write a program that displays the dimensions of a letter-size sheet of paper in millimeters.
*/

#include <iostream>

// Constants for dimensions.
const float MILLIMETERS_PER_INCH = 25.4f;
const float LETTER_HEIGHT_IN = 11.0f;
const float LETTER_WIDTH_IN = 8.5f;

int main(int argc, char *argv[])
{
	std::cout << "The size of a letter sheet of paper in millimeters is ";
	std::cout << LETTER_WIDTH_IN * MILLIMETERS_PER_INCH << "mm x ";
	std::cout << LETTER_HEIGHT_IN * MILLIMETERS_PER_INCH << "mm" << std::endl;

	return 0;
}