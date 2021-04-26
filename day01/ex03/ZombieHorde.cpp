#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _n(n)
{
	this->_horde = new Zombie[this->_n];
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_horde;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->_n; i++)
		_horde[i].announce();
}

