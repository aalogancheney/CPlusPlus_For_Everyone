/*
	Write a program that tells a cashier how to give change for a product. 
*/	

#include <iostream>

int main(int argc, char *argv[])
{
	// Declares the 3 variables involved with the customer's transaction. 
	double price, amountReceived, change;

	std::cout << "Enter the price of an item:" << std::endl;
	std::cin >> price;

	std::cout << "Enter the amount received from the customer:" << std::endl;
	std::cin >> amountReceived;

	change = amountReceived - price;

	// These if statements check for the condition to be true. If the condition is true, then
	// the code inside the brackets { } will be executed, otherwise the next condition
	// will be checked. For the first condition that is true, it will execute those 
	// statements.

	// Checks if the customer gave enough money.
	if(change < 0)
	{
		std::cout << "Customer did not give you enough money." << std::endl;
	}
	// Checks if the customer gave exact change. 
	else if (change == 0)
	{
		std::cout << "Customer gave you the exact amount. No change needed." << std::endl;
	}
	// Otherwise calculates the amount of change needed. 
	else if (change > 0)
	{
		std::cout << "You owe the customer $" << change << "." << std::endl;

		// Initializes the number of coins and dollars needed. 
		int dollars, cents; 
		int quarters(0), dimes(0), nickles(0), pennies(0);

		dollars = static_cast<int>(change);
		cents = (change - dollars) * 100 + 0.5;

		// Continually finds valid change, asuming larger coins are better before moving
		// onto smaller increments. 
		while(cents > 0)
		{
			if(cents >= 25)
			{
				cents -= 25;
				++quarters;
			}
			else if(cents >= 10)
			{
				cents -= 10;
				++dimes;
			}
			else if(cents >= 5)
			{
				cents -= 5;
				++nickles;
			}
			else if(cents >= 1)
			{
				cents -= 1;
				++pennies;
			}
		}

		// Shows the cashier what kind of change they need to give. 
		std::cout << "That's " << dollars << " dollar(s), " 
			      << quarters << " quarter(s), "
			      << dimes << " dime(s), "
			      << nickles << " nickle(s), "
			      << " and " << pennies << " pennies (penny)." << std::endl;
	}

	return 0;
}