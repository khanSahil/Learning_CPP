#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(std::string first,
	std::string last,
	int arbitrary,
	std::string handle)
	:
	Person(first, last, arbitrary), 
	twitterHandle(handle)
{
	std::cout << "Constructing Tweeter "  << twitterHandle << std::endl;
}

Tweeter::~Tweeter()
{
	std::cout << "destructing tweeter " << twitterHandle << std::endl;
}
