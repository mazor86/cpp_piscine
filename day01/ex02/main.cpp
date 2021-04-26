#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int		main()
{
	std::srand(std::time(0));
	Zombie zombie1("Roman", "student");
	zombie1.announce();

	ZombieEvent runner;
	runner.setZombieType("runner");
	Zombie* zombie2 = runner.newZombie("Phil");
	zombie2->announce();
	delete zombie2;

	ZombieEvent voodoo;
	voodoo.setZombieType("vodoo");
	Zombie* crowd[5];
	for (int i = 0; i < 5; i++)
	{
		crowd[i] = voodoo.randomChump();
	}

	for (int i = 0; i < 5; i++)
	{
		delete crowd[i];
	}

	return (0);
}