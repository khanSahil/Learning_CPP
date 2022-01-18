#include "Tweeter.h"
#include "status.h"
#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main()
{
	Person p1("Sahil", "Khan", 1989);
	{
		Tweeter t1("Someone", "Else", 1988, "@whoever");
		std::string name2 = t1.getName();
	}
	cout << "after innermost block" << endl;
	string name = p1.getName();

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = fileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

	return 0;
}

