#include <iostream>
#include <iomanip>
#include "Array.hpp"
#include "Pony.hpp"
#define RESET		"\x1B[0m"
#define RED_BOLD	"\x1B[1;31m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

int main()
{
	srand(time(NULL));
	std::cout << MAGENTA << "TEST EMPTY ARRAY" << RESET << std::endl;
	Array<int> emptyArray;
	std::cout << CYAN << "Size: " << RESET << emptyArray.size() << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "TEST [i] (i > size) " << RESET << std::endl;
	try
	{
		std::cout << emptyArray[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED_BOLD << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << MAGENTA << "TEST ARRAY WITH PARAMETER" << RESET << std::endl;
	Array<int> intArray(10);
	std::cout << CYAN << "Size: " RESET << intArray.size() << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "TEST ASSIGNATION AND COPY" << RESET << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		intArray[i] = rand()% 100;
	}
	std::cout << std::endl;
	emptyArray = intArray;
	for (unsigned int i = 0; i < emptyArray.size(); i++)
	{
		std::cout << GREEN << "intArray[" << i << "] = " << RESET << std::setw(3) <<intArray[i]; 
		std::cout << GREEN << "     emptyArray[" << i << "] = " << RESET << emptyArray[i] <<std::endl; 
	}
	std::cout << std::endl;
	std::cout << MAGENTA << "TEST ARRAY WITH CLASS" << RESET << std::endl;
	Array<Pony> herd(5);
	for (unsigned int i = 0; i < herd.size(); i++)
		std::cout << GREEN << "Pony[" << i << "] " << RESET <<  herd[i];


	
	return 0;
}