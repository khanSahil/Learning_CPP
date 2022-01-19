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
	Person(string first,
		string last,
		int age);
	~Person();
	string getName() const;
	int getAge() const { return age; }
	void setAge(int givenAge) { age = givenAge; }
};