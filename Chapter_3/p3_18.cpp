#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void ClearInputDisplayMessage(const string& message)
{
	cout << message;
	cin.clear();
	string ignore;
	getline(cin, ignore);
}

int main(int argc, char *argv[])
{
	cout << "Are you married (M) or single (S)? ";
	string maritalStatus;
	cin >> maritalStatus;

	while(maritalStatus != "M" && maritalStatus != "S")
	{
		cout << "Enter \"M\" for married or \"S\" for single: ";
		cin >> maritalStatus;
	}

	cout << "How much did you earn last year? ";
	double income;
	cin >> income;

	while(cin.fail() || income < 0)
	{
		ClearInputDisplayMessage("Please enter a valid income: ");
		cin >> income;
	}

	// Prevents us from having to use double the amount of if-else statements
	// in the next section, simply by applying a multiplier to the conditions.
	int taxFactor = maritalStatus == "M" ? 2 : 1;

	double taxes = 0;
	if(income < 8000 * taxFactor)
	{
		taxes += income * 0.1;
	}
	else if(income < 32000 * taxFactor)
	{
		taxes += 800 * taxFactor + (income - 8000 * taxFactor) * 0.15;
	}
	else
	{
		taxes += 4400 * taxFactor + (income - 32000 * taxFactor) * 0.25;
	}

	cout << "You owe $" << taxes << " in taxes." << endl;

	return 0;
}
