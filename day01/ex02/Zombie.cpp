#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
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
