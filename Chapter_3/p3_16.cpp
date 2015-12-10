#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void ClearInputDisplayMessage(const string& message)
{
	cout << message << endl;
	cin.clear();
	string ignore;
	getline(cin, ignore);
}

int main(int argc, char *argv[])
{
	cout << "Enter the employees name: ";
	string name;
	getline(cin, name);

	while(cin.fail())
	{
		ClearInputDisplayMessage("Please enter a valid name: ");
		getline(cin, name);
	}

	cout << "Enter the employees hourly wage: ";
	double wage;
	cin >> wage;

	while(cin.fail())
	{
		ClearInputDisplayMessage("Please enter a valid wage: ");
		cin >> wage;
	}

	cout << "How many hours did " << name << " work last week? ";
	double hours;
	cin >> hours;

	while(cin.fail())
	{
		ClearInputDisplayMessage("Please enter a valid number of hours: ");
		cin >> hours;
	}

	double totalPay = 0;
	if(hours > 40)
	{
		totalPay += wage * 40 + wage * 1.5 * (hours - 40);
	}
	else
	{
		totalPay += wage * hours;
	}

	cout << name << "'s Paycheck: " << totalPay << endl;

	return 0;
}