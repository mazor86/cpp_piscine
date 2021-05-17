#include "easyfind.hpp"
#include <list>
#include <vector>
#include <string>
#include <iostream>

int main()
{
	std::list<int> intList;
	intList.push_back(1);
	intList.push_back(8);
	intList.push_back(15);
	intList.push_back(16);
	intList.push_back(23);
	intList.push_back(42);

	int needle = 15;
	try
	{
		std::cout << *easyfind(intList, needle) << " is found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	needle = 100;
	try
	{
		std::cout << *easyfind(intList, needle) << " is found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << needle << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::vector<int> intVector;
	intVector.push_back(1);
	intVector.push_back(8);
	intVector.push_back(15);
	intVector.push_back(16);
	intVector.push_back(23);
	intVector.push_back(42);

	needle = 15;
	try
	{
		std::cout << *easyfind(intVector, needle) << " is found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	needle = 100;
	try
	{
		std::cout << *easyfind(intVector, needle) << " is found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << needle << e.what() << std::endl;
	}
 	return 0;
}