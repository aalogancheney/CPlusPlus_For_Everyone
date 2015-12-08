#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "Enter the initial balance for an account: ";
	float initialBalance;
	std::cin >> initialBalance;

	std::cout << "Enter the interest rate: ";
	float interestRate;
	std::cin >> interestRate;

	const int NUMBER_OF_YEARS = 3;
	for(int i = 0; i < NUMBER_OF_YEARS; ++i)
	{
		initialBalance += initialBalance * interestRate;
		std::cout << "The interest earned after " << i + 1 << " years is: " << initialBalance << std::endl;
	}

	return 0;
}