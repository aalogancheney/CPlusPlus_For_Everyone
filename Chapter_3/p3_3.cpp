/*
	Write a program that reads in three floating-point numbers and prints
	the largest of the three inputs. 
*/

#include <iostream>

int main(int argc, char *argv[])
{
	float number1, number2, number3;

	std::cout << "Enter 3 numbers: ";
	std::cin >> number1 >> number2 >> number3;

	// Three branches are used to check which of the three numbers is the largest. 
	if(number1 >= number2 && number1 >= number3)
	{
		std::cout << number1 << " is the biggest number." << std::endl;
	}
	else if(number2 >= number1 && number2 >= number3)
	{
		std::cout << number2 << " is the biggest number." << std::endl;
	}
	else
	{
		std::cout << number3 << " is the biggest number." << std::endl;
	}

	return 0;
}