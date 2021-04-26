#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "";
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

Zombie* ZombieEvent::randomChump()
{
	Zombie* randomZombie = ZombieEvent::newZombie(ZombieEvent::_getRandomName());
	randomZombie->announce(); 
	return (randomZombie);
}

const std::string ZombieEvent::_randomNames[20] = {
	"Christopher", "James", "David", "Daniel", "Mathew", "Andrew", "Richard",
	"Paul", "Mark", "Thomas", "Adam", "Robert", "John", "Lee", "Benjamin",
	"Steven", "Graig", "Mark", "Alex", "Lucas"
};

std::string		ZombieEvent::_getRandomName()
{
	return (ZombieEvent::_randomNames[std::rand() % 20]);
}