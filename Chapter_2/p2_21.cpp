/*
	Write a program that reads two times in military format and prints the number
	of hours and minutes between the two times. 
*/

#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "Enter two times in military format: ";
	int timeOne, timeTwo;
	std::cin >> timeOne >> timeTwo;

	// Calculates the difference between the two times in hours. If the second time came before
	// the first time, then the response is to shift the number of hours back.
	int hours = (timeTwo - timeOne) / 100;
	hours = hours < 0 ? timeTwo / 100 + 24 - timeOne / 100 : hours;

	// Gets rid of the number of hours so that we can deal with the number of minutes. 
	timeOne %= 100;
	timeTwo %= 100;

	// Calculates the number of minutes and again checks if the times were reversed in order. 
	int minutes = (timeTwo - timeOne);
	minutes = minutes < 0 ? -minutes : minutes;

	std::cout << "That's a difference of " << hours << " hour(s) and " << minutes << " minute(s)" << std::endl;

	return 0;
}