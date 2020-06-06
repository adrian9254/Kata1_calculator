#include <iostream>
#include <string>
#include "equations.hpp"

void plus()
{
	int a, b = 0;
	std::cout << "Tou typed addition. Please type 1st number:";
	std::cin >> a;
	std::cout << "Please type 2nd number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void minus()
{
	int a, b = 0;
	std::cout << "Tou typed substraction. Please insert 1st number:";
	std::cin >> a;
	std::cout << "Please type 2nd number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a - b << std::endl;
}


void divide()
{
	int a, b = 0;
	std::cout << "Tou typed division. Please insert 1st number:";
	std::cin >> a;
	std::cout << "Please type 2nd number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a / b << std::endl;
}

void multiply()
{
	int a, b = 0;
	std::cout << "Tou typed multiplication. Please insert 1st number:";
	std::cin >> a;
	std::cout << "Please type 2nd number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a * b << std::endl;
}
