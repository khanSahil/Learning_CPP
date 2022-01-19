#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

int main()
{
	int a = 3;
	cout << "a is " << a << endl;
	int& rA = a;
	rA = 5;
	cout << "a is " << a << endl;

	Person Sahil("Sahil", "Khan", 31);
	Person& rSahil = Sahil;
	rSahil.setAge(345);
	cout << "rSahil: " << rSahil.getName() << " " << rSahil.getAge() << endl;

	int* pA = &a;
	*pA = 4;
	cout << "a is " << a << endl;
	int b = 100;
	pA = &b;
	(*pA)++;
	cout << "a is " << a << ", *pA " << *pA << endl;

	Person* pSahil = &Sahil;
	(*pSahil).setAge(22);
	pSahil->setAge(33);
	cout << "Sahil: " << Sahil.getName() << " " << Sahil.getAge() << endl;
	cout << "pSahil: " << pSahil->getName() << " " << pSahil->getAge() << endl;

	return 0;
}