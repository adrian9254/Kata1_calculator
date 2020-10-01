//Equation Files for function Initialization

#include <iostream>
#include <string>
#include "equations.hpp"

void plus() //Addition Function 
{
	int a, b = 0;
	std::cout << "Tou typed addition. Please type 1st number:";
	std::cin >> a;
	std::cout << "Please type 2nd number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void minus() //Subtraction Function
{
	int a, b = 0;
	std::cout << "Tou typed substraction. Please insert 1st number:";
	std::cin >> a;
	std::cout << "Please type 2nd number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a - b << std::endl;
}


void divide() //Division Function
{
	int a, b = 0;
	std::cout << "Tou typed division. Please insert 1st number:";
	std::cin >> a;
	std::cout << "Please type 2nd number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a / b << std::endl;
}

void multiply() //Multiplcation Function
{
	int a, b = 0;
	std::cout << "Tou typed multiplication. Please insert 1st number:";
	std::cin >> a;
	std::cout << "Please type 2nd number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a * b << std::endl;
}
