#include "FragTrap.hpp"

FragTrap::FragTrap()
		: _hitPoints(100), _energyPoints(100), _level(1), _name(std::string("default_name")),
		  _meleeAttackDamage(30), _rangeAttackDamage(20),
		  _armorDamageReduction(5)
{
	std::cout << "Default contstructor for FR4G-TP called!" << std::endl;
}

FragTrap::FragTrap(std::string name)
		: _hitPoints(100), _energyPoints(100), _level(1), _name(name),
		  _meleeAttackDamage(30), _rangeAttackDamage(20),
		  _armorDamageReduction(5)
{
	std::cout << "Contstructor for FR4G-TP <" << this->_name << "> called!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "Copy constructor called!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	this->_name

}

