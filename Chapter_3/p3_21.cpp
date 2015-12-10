#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;
#include <string>
	using std::string;
#include <utility>
	using std::make_pair;
#include <fstream>
	using std::ifstream;
#include <map>
	using std::map;

// The master map which contains conversions. 
map<string, map<string, double> > CONVERSION_TABLE;

// PURPOSE: Read contents from a file and store them into a map. 
bool ParseConversionFile(map<string, map<string, double> >& conversionTable, string filename);
// PURPOSE: Reset cin and show a message to the user why their input failed.
void ClearInputDisplayMessage(const string& message);

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		cout << "Usage: ./p321 conversions.txt" << endl;
		return 1;
	}

	bool successful = ParseConversionFile(CONVERSION_TABLE, argv[1]);
	if(!successful)
	{
		cout << "Error parsing file." << endl;
		return 1;
	}

	cout << "Enter the units you wish to convert from: ";
	string from;
	cin >> from;

	map<string, map<string, double> >::iterator fromUnit = CONVERSION_TABLE.find(from);

	while(fromUnit == CONVERSION_TABLE.end() || cin.fail())
	{
		ClearInputDisplayMessage("Please enter a valid unit: ");
		cin >> from;
		fromUnit = CONVERSION_TABLE.find(from);
	}

	cout << "Enter the units you wish to convert to: ";
	string to;
	cin >> to;

	map<string, double>::iterator toUnit = fromUnit->second.find(to);

	while(toUnit == fromUnit->second.end() || cin.fail())
	{
		ClearInputDisplayMessage("Please enter a valid unit: ");
		cin >> to;
		toUnit = fromUnit->second.find(to);
	}

	cout << "Enter the value: ";
	double value;
	cin >> value;

	while(cin.fail())
	{
		ClearInputDisplayMessage("Please enter a valid value: ");
		cin >> value;
	}

	cout << value << " " << fromUnit->first << " = " << value * toUnit->second << " " << toUnit->first << endl;

	return 0;
}

bool ParseConversionFile(map<string, map<string, double> >& conversionTable, string filename)
{
	ifstream ifile(filename);
	if(ifile.fail())
	{
		cout << "No file " << filename << endl;
		return false;
	}
	string firstUnit, secondUnit;
	double conversionFactor;

	while(ifile >> firstUnit >> secondUnit >> conversionFactor)
	{
		map<string, map<string, double> >::iterator foundFirst = conversionTable.find(firstUnit);
		map<string, map<string, double> >::iterator foundSecond = conversionTable.find(secondUnit);
		
		if(foundFirst == conversionTable.end())
		{
			map<string, double> firstInner;
			firstInner.insert(make_pair(secondUnit, conversionFactor));
			conversionTable.insert(make_pair(firstUnit, firstInner));
		}
		else
		{
			foundFirst->second.insert(make_pair(secondUnit, conversionFactor));
		}

		if(foundSecond == conversionTable.end())
		{
			map<string, double> secondInner;
			secondInner.insert(make_pair(firstUnit, 1 / conversionFactor));
			conversionTable.insert(make_pair(secondUnit, secondInner));
		}
		else
		{
			foundSecond->second.insert(make_pair(firstUnit, 1 / conversionFactor));
		}
	}

	ifile.close();
	return true;
}

void ClearInputDisplayMessage(const string& message)
{
	cout << message;
	cin.clear();
	string ignore;
	getline(cin, ignore);
}