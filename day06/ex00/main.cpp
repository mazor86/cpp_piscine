#include "Convert.hpp"
#include <iostream>
#define RESET		"\x1B[0m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"
#define RED_BOLD	"\x1B[1;31m"

int		main(int ar, char **av)
{
	if (ar != 2)
	{
		std::cout << RED_BOLD << "Wrong number of arguments" << RESET << std::endl;
		return (1);
	}
	try
	{
		Convert str(av[1]);
	}
	catch (...)
	{
		std::cout  << std::endl << "I am Catcher of Seg!!!" << std::endl;
	}
//
//	int a = atoi(av[1]);
//	double b = atof(av[1]);
//	float e = static_cast<float>(b);
//	double c = strtod(av[1], NULL);
//	float f = 43.0f;
//	std::cout << GREEN << "   int: " << RESET << a << std::endl;
//	std::cout << GREEN << " float: " << RESET << e << std::endl;
//	std::cout << GREEN << "double: " << RESET << c << std::endl;
//	std::cout << GREEN << " float: " << RESET << f << std::endl;

	return (0);
}
