#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap(), FragTrap(), NinjaTrap()
{
	this->_hitPoints = FragTrap::_initHitPoints;
	this->_maxHitPoints = FragTrap::_initMaxHitPoints;
	this->_energyPoints = NinjaTrap::_initEnergyPoints;
	this->_maxEnergyPoints = NinjaTrap::_initMaxEnergyPoints;
	this->_level = 1;
	this->_name = "default_SuperTrap";
	this->_meleeAttackDamage = NinjaTrap::_initMeleeAttackDamage;
	this->_rangeAttackDamage = FragTrap::_initRangeAttackDamage;
	this->_armorDamageReduction = FragTrap::_initArmorDamageReduction;
	std::cout << "SuperTrap class default constructor called" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap class destructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->_hitPoints = FragTrap::_initHitPoints;
	this->_maxHitPoints = FragTrap::_initMaxHitPoints;
	this->_energyPoints = NinjaTrap::_initEnergyPoints;
	this->_maxEnergyPoints = NinjaTrap::_initMaxEnergyPoints;
	this->_level = 1;
	this->_meleeAttackDamage = NinjaTrap::_initMeleeAttackDamage;
	this->_rangeAttackDamage = FragTrap::_initRangeAttackDamage;
	this->_armorDamageReduction = FragTrap::_initArmorDamageReduction;
	std::cout << "SuperTrap class parametrized constructor called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy)
{
	*this = copy;
	std::cout << "SuperTrap class copy constructor called" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &copy)
{
	ClapTrap::operator=(copy);
	return (*this);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}