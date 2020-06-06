
#include <iostream>
#include <string>
#include "parser.hpp"
#include "equations.hpp"

void commandParser(std::string &msg)
{
	if (msg == "plus")
	{
		plus();
	}else if(msg == "minus")
	{
		minus();
	}else if(msg == "div")
	{
		divide();
	}else if(msg == "mul")
	{
		multiply();
	}else{
		std::cout << "Command not found!" << std::endl;
	}
}
