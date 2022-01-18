/*
Hello.cpp : Defines the entry point for the console application
*/

#include <iostream>
#include <string>

int main()
{
	std::cout << std::endl;
	std::cout << "Please enter your name : ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl;

	return 0;
} 