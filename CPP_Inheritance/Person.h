#pragma once
#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Person
{
private:
	string firstName;
	string lastName;
	int age;

public:
	void setName();
	string getName();
	void setAge();
	int getAge();
	Person(string first, string last, int age);
	Person();
	~Person();
};