// By casting you make your intention clear
// Thus can backfire.
// CPP has its own casts, we call it as safe casts
// Suffix to show type of literal


#include <iostream>

int main()
{
	// talking about some integers only and how we can declare and assign values
	std::cout << std::endl;
	int i1 = 1;
	std::cout << "i1 = " << i1 << std::endl;
	int i2;
	i2 = 2;
	std::cout << "i2 = " << i2 << std::endl;
	int i3(3);
	std::cout << "i3 = " << i3 << std::endl;
	int i4{ 4 };
	std::cout << "i4 = " << i4 << std::endl;

	// talking about some float and double only, and how we can declare and assign values

	double d1 = 2.2;
	double d2 = i1;
	int i5 = static_cast<int>(d1);
	std::cout << "d1 = " << d1 << std::endl;
	std::cout << "d2 = " << d2 << std::endl;
	std::cout << "i5 = " << i5 << std::endl;

	// talking about character variables and how we can declare and assing values
	char c1 = 'a';
	//char c2 = "b";
	std::cout << "c1 = " << c1 << std::endl;
	//std::cout << "c2 = " << c2 << std::endl;

	/*
	// talking about bool variable and how they are declared and assign values
	bool flag = false;
	std::cout << "flag = " << flag << std::endl;
	flag = i1;
	std::cout << "flag = " << flag << std::endl;
	flag = d1;
	std::cout << "flag = " << flag << std::endl;

	// talking about auto variable and how they are declared and assign values
	auto a1 = 1;
	auto a2 = 2.2;
	auto a3 = 'c';
	auto a4 = "S";
	auto a5 = true;
	auto a6 = 3;
	auto a7 = 1'000'000'000'000;
	auto a8 = 0xFF;
	auto a9 = 0b1111;

	a1 = a2;
	*/
	return 0;
}