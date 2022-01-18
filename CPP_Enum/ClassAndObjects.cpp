#include "Tweeter.h"
#include "status.h"
#include <iostream>
//using std::cout;
//using std::cin;

int main()
{
	Person p1("Sahil", "Khan", 1989);
	{
		Tweeter t1("Someone", "Else", 1988, "@whoever");
		string name2 = t1.getName();
	}
	cout << "after innermost block" << endl;
	string name = p1.getName();

	status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

	return 0;
}

