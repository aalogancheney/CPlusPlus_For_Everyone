#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::cout << "Hello, my name is Hal!" << std::endl;
	std::cout << "What is your name?" << std::endl;

	std::string input;
	std::cin >> input;

	std::cout << "Hello, " << input << ". I'm glad to meet you!" << std::endl;

	return 0;
}