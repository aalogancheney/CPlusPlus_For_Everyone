#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::cout << "Hello, my name is Hal!" << std::endl;
	std::cout << "What would you like me to do?" << std::endl;

	std::string input;
	std::cin >> input;

	std::cout << "I am sorry, I cannot do that." << std::endl; 

	return 0;
}