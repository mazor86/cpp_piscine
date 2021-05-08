#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
		: _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
		  _level(1), _name(std::string("default_name")),
		  _meleeAttackDamage(30), _rangeAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "ClapTrap class default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap class destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name)
		: _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
		  _level(1), _name(name),
		  _meleeAttackDamage(30), _rangeAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "ClapTrap class parametrized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "ClapTrap class copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_meleeAttackDamage = rhs. getMeleeAttackDamage();
	this->_rangeAttackDamage = rhs.getRangeAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->getArmorDamageReduction())
		std::cout << this->_name << ": Hahah. My grandma spanked me harder" << std::endl << std::endl;
	else
	{
		if (this->_hitPoints > (amount - this->getArmorDamageReduction()))
		{
			this->_hitPoints -= (amount - this->getArmorDamageReduction());
			std::cout << this->_name << ": Ow hohoho, that hurts! Yipes!" << std::endl;
			std::cout << "[ " << this->_name << ": HP = " << this->getHitPoints() << " ]" <<std::endl;
			std::cout << std::endl;
		}
		else
		{
			this->_hitPoints = 0;
			std::cout << this->_name << ": Extra ouch! You kill me..." << std::endl;
			std::cout << "[ " << this->_name << ": HP = " << this->getHitPoints() << " ]" <<std::endl;
			std::cout << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
	std::cout << this->_name << ": I found " << amount << " HP!" << std::endl;
	std::cout << "[ " << this->_name << ": HP = " << this->getHitPoints() << " ]" <<std::endl;
	std::cout << std::endl;
}

unsigned int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}

unsigned int ClapTrap::getLevel() const
{
	return _level;
}

const std::string &ClapTrap::getName() const
{
	return _name;
}

unsigned int ClapTrap::getMeleeAttackDamage() const
{
	return _meleeAttackDamage;
}

unsigned int ClapTrap::getRangeAttackDamage() const
{
	return _rangeAttackDamage;
}

unsigned int ClapTrap::getArmorDamageReduction() const
{
	return _armorDamageReduction;
}

unsigned int ClapTrap::getMaxHitPoints() const
{
	return _maxHitPoints;
}

unsigned int ClapTrap::getMaxEnergyPoints() const
{
	return _maxEnergyPoints;
}