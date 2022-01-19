#include "Person.h"

Person::Person(string first, string last, int age)
	:
	firstName(first), lastName(last), age(age)
{
	cout << "Constructing " << firstName + " " + lastName << endl;
}

Person::~Person()
{
	cout << "Destructing " << firstName + " " + lastName << endl;
}

string Person::getName() const
{
	return firstName + " " + lastName;
}