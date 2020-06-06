#include <iostream>
#include <string>
#include "modules/parser.hpp"

int main(void)
{
	std::cout << "Type proper command: plus, minus, div, mul" << std::endl;
	std::string msg;
	std::cin >> msg;
	commandParser(msg);
}
