#include "FragTrap.hpp"

FragTrap::FragTrap()
		: _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
		  _level(1), _name(std::string("default_name")),
		  _meleeAttackDamage(30), _rangeAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Default contstructor for FR4G-TP called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
	std::cout << "FR4G-TP <" << this->_name << "> is died =(" << std::endl;
}

FragTrap::FragTrap(std::string const & name)
		: _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
		  _level(1), _name(name),
		  _meleeAttackDamage(30), _rangeAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Contstructor for FR4G-TP <" << this->_name << "> called!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "Copy constructor called!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " at range, causing " << this->getRangeAttackDamage();
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in the melee, causing " << this->getMeleeAttackDamage();
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->getArmorDamageReduction())
		std::cout << "Hahah. My grandmother spanked me harder" << std::endl;
	else
	{
		if (this->_hitPoints > (amount - this->getArmorDamageReduction()))
		{
			this->_hitPoints -= (amount - this->getArmorDamageReduction());
			std::cout << this->_name << ": Ow hohoho, that hurts! Yipes!" << std::endl;
			std::cout << "[ " << this->_name << ": HP = " << this->getHitPoints() << " ]" <<std::endl;
		}
		else
		{
			this->_hitPoints = 0;
			std::cout << this->_name << ": Extra ouch! You kill me..." << std::endl;
			std::cout << "[ " << this->_name << ": HP = " << this->getHitPoints() << " ]" <<std::endl;
		}
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
	std::cout << this->_name << ": I found " << amount << " HP!";
	std::cout << "[ " << this->_name << ": HP = " << this->getHitPoints() << " ]" <<std::endl;
}

unsigned int FragTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int FragTrap::getEnergyPoints() const
{
	return _energyPoints;
}

unsigned int FragTrap::getLevel() const
{
	return _level;
}

const std::string &FragTrap::getName() const
{
	return _name;
}

unsigned int FragTrap::getMeleeAttackDamage() const
{
	return _meleeAttackDamage;
}

unsigned int FragTrap::getRangeAttackDamage() const
{
	return _rangeAttackDamage;
}

unsigned int FragTrap::getArmorDamageReduction() const
{
	return _armorDamageReduction;
}

unsigned int FragTrap::getMaxHitPoints() const
{
	return _maxHitPoints;
}

unsigned int FragTrap::getMaxEnergyPoints() const
{
	return _maxEnergyPoints;
}



