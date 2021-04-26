#include <iostream>
#include "Pony.hpp"


void ponyOnTheHeap()
{
	Pony* pony0 = new Pony();
	delete pony0;
	Pony* ponies = new Pony[2];
	delete [] ponies;
}

void ponyOnTheStack()
{
	Pony pony1;
	Pony pony2;
	Pony pony3;
}

int	main()
{
	std::srand(std::time(0));
	Pony *pony1 = new Pony();
	std::cout << "***Ponies on the heap***" << std::endl << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "***Ponies on the stack***" << std::endl << std::endl;
	ponyOnTheStack();
	delete pony1;

	return 0;
}
