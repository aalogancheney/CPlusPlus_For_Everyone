#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	long userNumber;
	cout << "Enter a number between negative ten billion and ten billion." << endl;
	cin >> userNumber;

	userNumber = userNumber < 0 ? -userNumber : userNumber;

	long digits;

	if(userNumber >= 10000000000)
	{
		digits = 11;
	}
	else if(userNumber >= 1000000000)
	{
		digits = 10;
	}
	else if(userNumber >= 100000000)
	{
		digits = 9;
	}
	else if(userNumber >= 10000000)
	{
		digits = 8;
	}
	else if(userNumber >= 1000000)
	{
		digits = 7;
	}
	else if(userNumber >= 100000)
	{
		digits = 6;
	}
	else if(userNumber >= 10000)
	{
		digits = 5;
	}
	else if(userNumber >= 1000)
	{
		digits = 4;
	}
	else if(userNumber >= 100)
	{
		digits = 3;
	}
	else if(userNumber >= 10)
	{
		digits = 2;
	}
	else
	{
		digits = 1;
	}

	cout << "Your number has " << digits << " digits." << endl;

	// A cleaner way to calculate the number of digits for a given integer. 
	int alternateDigits(0);

	while(userNumber > 0)
	{
		userNumber /= 10;
		++alternateDigits;
	}

	cout << alternateDigits << endl;

	return 0;
}