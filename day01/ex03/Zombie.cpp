#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name(Zombie::_getRandomName()), _type(Zombie::_getRandomType())
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->_name << "(" << this->_type << ") is dead..." << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << "I'm " << this->_name << "(" << this->_type << ")" << std::endl;
}

const std::string Zombie::_randomNames[20] = {
	"Christopher", "James", "David", "Daniel", "Mathew", "Andrew", "Richard",
	"Paul", "Mark", "Thomas", "Adam", "Robert", "John", "Lee", "Benjamin",
	"Steven", "Graig", "Mark", "Alex", "Lucas"
};

const std::string Zombie::_randomType[10] = {
	"runner", "voodoo", "romero", "ghoul", "crawler", "screamer", "bonie",
	"animal", "spitter", "stalker"
};

std::string		Zombie::_getRandomType()
{
	return (Zombie::_randomType[std::rand() % 10]);
}

std::string		Zombie::_getRandomName()
{
	return (Zombie::_randomNames[std::rand() % 20]);
}