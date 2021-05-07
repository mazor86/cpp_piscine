#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default contstructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap class destructor called" << std::endl;
}

FragTrap::FragTrap(std::string const & name): ClapTrap(name)
{
	std::cout << "FragTrap class contstructor for called!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FragTrap class copy constructor called!" << std::endl;
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
	std::cout << this->_name << ": Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!" << std::endl;
	std::cout << std::endl;
}
void FragTrap::_gunWizardAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in Gun-Wizard mode" << std::endl;
	std::cout << this->_name << ": You can call me Gundalf!" << std::endl;
	std::cout << std::endl;
}

void FragTrap::_laserInfernoAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in Laser-Inferno mode" << std::endl;
	std::cout << this->_name << ": Laaasers!" << std::endl;
	std::cout << std::endl;
}

void FragTrap::_oneShotWonderAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in One-Shot-Wonder mode" << std::endl;
	std::cout << this->_name << ": All these bullets in just one shot." << std::endl;
	std::cout << std::endl;
}

void FragTrap::_pirateShipModeAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in Pirate-Ship mode" << std::endl;
	std::cout << this->_name << ": I feel a joke about poop decks coming on!" << std::endl;
	std::cout << std::endl;
}
