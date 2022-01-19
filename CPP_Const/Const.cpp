#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

int DoubleIt(int x)
{
	return x * 2;
}

int main()
{
	int i = 3;
	int const ci = 3;
	i = 4;
	//ci = 4;

	int& ri = i;
	ri = 5;

	int const& cri = i;
	//cri = 6;
	
	//int& ncri = ci;

	int j = 10;
	int DoubleJ = DoubleIt(j);
	int DoubleTen = DoubleIt(10);

	Person Sahil("Sahil", "Khan", 29);
	Sahil.setAge(31);
	Person const cSahil = Sahil;
	//cKate.setAge(33);
	int SahilAge = cSahil.getAge();

	int* pI = &i;
	//int* pII = &pI;
	//pI = &Sahil;

	int const * pcI = pI; // pointer to a const
	//*pcI = 4;
	pcI = &j;
	j = *pcI;

	int* const cpI = pI; // const pointer
	*cpI = 4;
	// cpI = &j;

	int const* const crazy = pI; // consts pointer to const
	//*crazy = 4;
	//crazy = &j;
	j = *crazy;

}
