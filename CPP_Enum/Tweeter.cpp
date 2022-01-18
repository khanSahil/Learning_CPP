#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(string first,
	string last,
	int arbitrary,
	string handle)
	:
	Person(first, last, arbitrary),
	twitterHandle(handle)
{
	cout << "Constructing Tweeter " << twitterHandle << endl;
}

Tweeter::~Tweeter()
{
	cout << "destructing tweeter " << twitterHandle << endl;
}
