#include "span.hpp"
#define RESET		"\x1B[0m"
#define RED_BOLD	"\x1B[1;31m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

int		main(void)
{
	srand(time(NULL));
	std::cout << MAGENTA << "TEST SUBJECT PART" << RESET << std::endl;

	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;

	std::cout << MAGENTA << "TEST ADD NUMBER AND ERRORS" << RESET << std::endl;

	Span array(7);
	for (int i = 0; i < 7; i++)
	{
		array.addNumber(rand() % 100);
		std::cout << GREEN << "arr[" << i << "] = " << RESET << (array.getArray())[i] << std::endl;
	}
	std::cout << CYAN << "Shortest span = " << RESET << array.shortestSpan() << std::endl;
	std::cout << CYAN << "Longest span = " << RESET << array.longestSpan() << std::endl;

	try
	{
		array.addNumber(100);
	}
	catch (std::exception &e)
	{
		std::cout << RED_BOLD << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;
	std::cout << MAGENTA << "TEST ADD NUMBER by passing a range of iterators" << RESET << std::endl;

	Span bigArr(20000);
	std::vector<int> anotherBig(19990);
	for (unsigned int i = 0; i < anotherBig.size(); i++)
		anotherBig[i] = rand() % 10000000;
	bigArr.addNumber(anotherBig.begin(), anotherBig.end());
	std::cout << CYAN << "Shortest span = " << RESET << bigArr.shortestSpan() << std::endl;
	std::cout << CYAN << "Longest span = " << RESET << bigArr.longestSpan() << std::endl;
	return (0);
}
