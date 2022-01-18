#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	Person p1 ("Baby", "Kahkeshan", 23);
	{
		Person p2;
	}
	cout << "after innermost block" << '\n';
	string name1 = p1.getName();
	return 0;
}