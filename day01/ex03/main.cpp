#include "ZombieHorde.hpp"

int		main()
{
	std::srand(std::time(NULL));
	ZombieHorde crowd(10);
	crowd.announce();
	return (0);
}