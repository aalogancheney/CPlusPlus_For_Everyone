#include <iostream>
#include <string>

using namespace std;

const string SEASONS[4] = { "Winter", "Spring", "Summer", "Fall" };

int main(int argc, char *argv[])
{
	int month, day;
	cout << "Enter the current month and day in number format: ";
	cin >> month >> day;

	int season = (month - 1) / 3;

	if(month % 3 == 0 && day >= 21)
	{
		season = (season + 1) % 4;
	}

	string output(SEASONS[season]);

	cout << "The current season is " << output << endl << endl;

	return 0;
}