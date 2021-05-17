#include "mutantstack.hpp"
#include <iostream>
#include <algorithm>
#define RESET		"\x1B[0m"
#define RED_BOLD	"\x1B[1;31m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

void print_(MutantStack<int>::iterator it)
{
	std::cout << *it << " ";
}

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);


	std::cout << std::endl;
	srand(time(NULL));
	std::cout << CYAN << "Testing iterator...\n" << RESET;
	MutantStack<int> testStack;
	for (size_t i = 0; i < 30; i++)
		testStack.push(rand() % 100);
	std::cout << GREEN << "[On top]: " << CYAN << testStack.top() << RESET << std::endl;
	MutantStack<int>::iterator it_1 = testStack.begin();
	MutantStack<int>::iterator ite_1 = testStack.end();
	std::cout << GREEN << "[STACK]: " << CYAN;
	while(it_1 != ite_1)
	{
		std::cout << *it_1 << " ";
		++it_1;
	}
	std::cout << RESET << std::endl;
	return 0;
}