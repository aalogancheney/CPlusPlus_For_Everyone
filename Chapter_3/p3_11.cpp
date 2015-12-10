#include <iostream>
#include <string>

using namespace std;


int main(int argc, char *argv[])
{
	string userCard;
	cout << "Enter a card: ";
	cin >> userCard;

	string output;

	if(userCard.substr(0, 1) == "A")
	{
		output = "Ace";
	}
	else if(userCard.substr(0, 1) == "J")
	{
		output = "Jack";
	}
	else if(userCard.substr(0, 1) == "Q")
	{
		output = "Queen";
	}
	else if(userCard.substr(0, 1) == "K")
	{
		output = "King";
	}
	else
	{
		output = userCard.size() > 2 ? userCard.substr(0, 2) : userCard.substr(0, 1);
	}

	output += " of ";

	if(userCard.substr(userCard.size() - 1, 1) == "S")
	{
		output += "Spades";
	}
	else if(userCard.substr(userCard.size() - 1, 1) == "H")
	{
		output += "Hearts";
	}
	else if(userCard.substr(userCard.size() - 1, 1) == "D")
	{
		output += "Diamonds";
	}
	else
	{
		output += "Clubs";
	}

	cout << "Your card is the " << output << endl;

	return 0;
}