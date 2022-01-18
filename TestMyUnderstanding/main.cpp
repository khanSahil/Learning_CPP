#include "Person.h"


int main()
{
	cout << endl;
	Person p1 ("Baby", "Kahkeshan", 31);
	Person p2;
	
	cout << "Name : " << p1.getName() << endl;
	cout << "Age : " << p1.getAge() << endl;

	cout << endl << "Setting the Name and Age after Constructor is called" << endl;
	p1.setName();
	p1.setAge();
	
	cout << endl;
	cout << "Name : " << p1.getName() << endl;
	cout << "Age : " << p1.getAge() << endl;
	
	return 0;
}