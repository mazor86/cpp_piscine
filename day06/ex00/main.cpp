#include "Convert.hpp"
#include <iostream>
#define RESET		"\x1B[0m"
#define RED_BOLD	"\x1B[1;31m"

int		main(int ar, char **av)
{
	if (ar != 2)
	{
		std::cout << RED_BOLD << "Wrong number of arguments" << RESET << std::endl;
		return (1);
	}
	else
	{
		Convert str(av[1]);
		std::cout << str;
	}
	return (0);
}
