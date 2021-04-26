#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include <string>
# include <ctime>
# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie*		_horde;
	int			_n;


public:
	ZombieHorde(int n);
	~ZombieHorde();

	void	announce();
};

#endif