#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool IsLeapYear(int year);

int main(int argc, char *argv[])
{
	cout << "Enter a year: ";
	int year;
	cin >> year;

	if(IsLeapYear(year))
	{
		cout << "The year " << year << " is a leap year." << endl;
	}
	else
	{
		cout << "The year " << year << " is not a leap year." << endl;
	}

	return 0;
}

bool IsLeapYear(int year)
{
	// Covers the case for years before 1582 when there were no exceptions, and also catches
	// negative years. 
	if(year < 1582 && year > 0 && year % 4 == 0)
	{
		return true;
	}
	// Checks for years after 1582 when a year had to be divisible by 4 and not 100, except if
	// the year is divisible by 400
	else if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return true;
	}
	// Otherwise it is not a leap year. 
	else
	{
		return false;
	}
}