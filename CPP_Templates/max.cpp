// max.cpp defines the entry point for the console application

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"

template <class T>
T max(T const& t1, T const& t2)
{
	return t1 < t2 ? t2 : t1;
}

int main()
{
	cout << "max of 33 and 44 is " << max(33, 44) << endl;
	string s1 = "Hello";
	string s2 = "world";

	Person p1("Baby", "Kahkeshan", 123);
	Person p2("Someone", "Else", 456);
	cout << "max of " << p1.GetName() << " and " << p2.GetName() << 
		" is " << max(p1,p2).GetName() << endl;
	
	return 0;
}