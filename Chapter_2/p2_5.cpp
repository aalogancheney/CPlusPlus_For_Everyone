/*
	Write a program that prompts the user for two integers and then prints:
	1. The distance.
	2. The maximum.
	3. The minimum.
*/

#include <iostream>
#include <algorithm>
#include <cmath>

int main(int argc, char *argv[])
{
	std::cout << "Enter two integers:" << std::endl;

	// Declares two integers on the same line with a comma to separate them.
	int number1, number2;

	// Prompts the user for the numbers separately in a better format than the previous
	// problem. This way a user knows when they have successfully entered an integer since
	// they are prompted for the next one.
	std::cout << "Number 1: ";
	std::cin >> number1;

	std::cout << "Number 2: ";
	std::cin >> number2;

	// Calculates the three properties we want and saves them into variables for later use. Each
	// of the variables are declared as constants since they shouldn't change later in the program,
	// which helps protect us from our future selves...
	const int distance = abs(number1 - number2); // abs(x) returns the absolute value of x.
	const int max = std::max(number1, number2); // std::max(x, y) returns the larger value between x and y.
	const int min = std::min(number1, number2); // std::min(x, y) returns the smaller value between x and y.

	// Notice in the above calculations that we named our variables with good names. But there seems to be
	// something odd... The name of our "maximum" variable is "max", and we are using a function called "max".
	// This may appear confusing, but look at what comes before the function call. We use "std::max()" to call
	// our maximum function.

	// This is a more advanced topic in programming, but it will help to explain a little here. In a computer
	// program, we can have things with the same name -- as long as the compiler knows what each thing is 
	// being referred to. The two colons "::" are called the "scoping operator", which tells the compiler where
	// to look for a particular piece of code. When calling "std::max()", we are telling the compiler to go to
	// the standard library (std) and look for a function called "max". Without the "std::" in front of "max", 
	// the compiler would not know the difference between the integer declared just before and the function call.
	// This is why we have to write "std::max" to specifically use the "max" function. 

	// Shows output to user. 
	std::cout << "The distance is: " << distance << std::endl;
	std::cout << "The maximum is: " << max << std::endl;
	std::cout << "The minimum is: " << min << std::endl;

	return 0;
}