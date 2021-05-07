#include "FragTrap.hpp"

FragTrap::FragTrap()
		: _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
		  _level(1), _name(std::string("default_name")),
		  _meleeAttackDamage(30), _rangeAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Default contstructor for FR4G-TP called!" << std::endl << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
	std::cout << "FR4G-TP <" << this->_name << "> is died =(" << std::endl << std::endl;
}

FragTrap::FragTrap(std::string const & name)
		: _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
		  _level(1), _name(name),
		  _meleeAttackDamage(30), _rangeAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Contstructor for FR4G-TP <" << this->_name << "> called!" << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "Copy constructor called!" << std::endl << std::endl;
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
	std::cout << std::endl;

}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in the melee, causing " << this->getMeleeAttackDamage();
	std::cout << " points of damage!" << std::endl;
	std::cout << std::endl;

}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
	std::cout << this->_name << ": I found " << amount << " HP!" << std::endl;
	std::cout << "[ " << this->_name << ": HP = " << this->getHitPoints() << " ]" <<std::endl;
	std::cout << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (this->_energyPoints < 25)
	{
		std::cout << this->_name <<": Not enough energy points to use my super attack. Need 25. I have ";
		std::cout << this->_energyPoints << std::endl << std::endl;

	}
	else
	{
		this->_energyPoints -= 25;
		int rnd = std::rand() % 5;
		if (rnd == 0)
			this->_clapInTheBoxAttack(target);
		else if (rnd == 1)
			this->_gunWizardAttack(target);
		else if (rnd == 2)
			this->_laserInfernoAttack(target);
		else if (rnd == 3)
			this->_oneShotWonderAttack(target);
		else
			this->_pirateShipModeAttack(target);
	}
}

void FragTrap::_clapInTheBoxAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in Clap-in-the-Box mode" << std::endl;
	std::cout << std::endl;
}

void FragTrap::_gunWizardAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in Gun-Wizard mode" << std::endl;
	std::cout << std::endl;
}

void FragTrap::_laserInfernoAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in Laser-Inferno mode" << std::endl;
	std::cout << std::endl;
}

void FragTrap::_oneShotWonderAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in One-Shot-Wonder mode" << std::endl;
	std::cout << std::endl;
}

void FragTrap::_pirateShipModeAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in Pirate-Ship mode" << std::endl;
	std::cout << std::endl;
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



