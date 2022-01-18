#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Person
{
private:
	string firstName;
	string lastName;
	int arbitraryNumber;
	//friend bool operator<(int i, Person const& p);

public:
	Person(string first, string last, int arbitrary);
	~Person();
	int getNumber() const { return arbitraryNumber; }
	void setNumber(int number) { arbitraryNumber = number; }
	bool operator<(Person const& p) const; // this takes a person reference as a const
	bool operator<(int i) const;	// this takes a normal integer i
};

bool operator<(int i, Person const& p);