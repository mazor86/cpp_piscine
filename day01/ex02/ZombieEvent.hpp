#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <string>
# include "Zombie.hpp"
# include <ctime>

class	ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();

		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		Zombie* randomChump();
	
	private:
		std::string	_type;

		static const std::string	_randomNames[20];
		static std::string			_getRandomName();
};
#endif