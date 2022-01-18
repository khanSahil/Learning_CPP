#include "Person.h"

Person::Person(string first, string last, int number)
	:
	firstName(first), lastName(last), arbitraryNumber(number)
{
	std::cout << "Constructing " << firstName + " " + lastName << std::endl;
}

Person::~Person()
{
	std::cout << "Destructing " << firstName + " " + lastName << std::endl;
}

bool Person::operator<(Person const& p) const
{
	return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator<(int i) const
{
	return arbitraryNumber < i;
}

bool operator<(int i, Person const& p)
{
	//return i < p.arbitraryNumber;
	return i < p.getNumber();
}