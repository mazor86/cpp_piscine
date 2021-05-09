#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangeAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "NinjaTrap class default constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = NinjaTrap::_initHitPoints;
	this->_maxHitPoints = NinjaTrap::_initMaxHitPoints;
	this->_energyPoints = NinjaTrap::_initEnergyPoints;
	this->_maxEnergyPoints = NinjaTrap::_initMaxEnergyPoints;
	this->_meleeAttackDamage = NinjaTrap::_initMeleeAttackDamage;
	this->_rangeAttackDamage = NinjaTrap::_initRangeAttackDamage;
	this->_armorDamageReduction = NinjaTrap::_initArmorDamageReduction;
	std::cout << "NinjaTrap class parametrized constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
	std::cout << "NinjaTrap class copy constructor called" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap class destructor called" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void NinjaTrap::rangedAttack(const std::string &target)
{
	std::cout << "Ninja <" << this->_name << "> attacks ";
	std::cout << target << " at range, causing " << this->getRangeAttackDamage();
	std::cout << " points of damage!" << std::endl;
	std::cout << this->_name << ": Eat bomb, baddie!" << std::endl;
	std::cout << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout << "Ninja <" << this->_name << "> attacks ";
	std::cout << target << " in the melee, causing " << this->getMeleeAttackDamage();
	std::cout << " points of damage!" << std::endl;
	std::cout << this->_name << ": Heyyah! Take that!" << std::endl;
	std::cout << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap & obj)
{
	std::cout << "It's my ninja attack against ClapTrap " << obj.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & obj)
{
	std::cout << "It's my ninja attack against FragTrap " << obj.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & obj)
{
	std::cout << "It's my ninja attack against ScavTrap " << obj.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & obj)
{
	std::cout << "It's my ninja attack against NinjaTrap " << obj.getName() << std::endl;
}