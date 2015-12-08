/*
	Write a program that prints the balance of an account that earns 5 percent interest per year
	after the first, second, and third year.
*/

#include <iostream>

int main(int argc, char *argv[])
{
	// Asks the user for the initial account balance.
	std::cout << "Enter the initial balance for an account: ";
	float initialBalance;
	std::cin >> initialBalance;

	// Asks the user for the interest rate on the account.
	std::cout << "Enter the interest rate: ";
	float interestRate;
	std::cin >> interestRate;

	// A variable indicating the number of years to calculate for. The const in front indicates
	// that after this variable is declared it cannot be modified. This should be used for any values
	// you know will not change. 
	const int NUMBER_OF_YEARS = 3;

	// Uses a for loop to constantly update the initial balance with the interest earned over the amount
	// of time specified, and shows that value out to the user. 
	for(int i = 0; i < NUMBER_OF_YEARS; ++i)
	{
		initialBalance += initialBalance * interestRate;
		std::cout << "The interest earned after " << i + 1 << " years is: " << initialBalance << std::endl;
	}

	return 0;
}