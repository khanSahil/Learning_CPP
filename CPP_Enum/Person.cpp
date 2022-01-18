#include "Person.h"

Person::Person(string first, string last, int age)
	:
	firstName(first), lastName(last), age(age)
{
	cout << "Constructing " << firstName + " " + lastName << endl;
}

Person::Person() : age(21)
{}

Person::~Person()
{
	cout << "Destructing " << firstName + " " + lastName << endl;
}

void Person::setName()
{
	firstName = "Sahil";
	lastName = "Khan";
}

string Person::getName()
{
	return firstName + " " + lastName;
}

void Person::setAge()
{
	age = 31;
}

int Person::getAge()
{
	return age;
}