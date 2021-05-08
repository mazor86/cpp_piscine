#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangeAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "ScavTrap class default contstructor  called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap class destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name): ClapTrap(name)
{
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangeAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "ScavTrap class parametrized contstructor called!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "ScavTrap class copy constructor called!" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "SV4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " at range, causing " << this->getRangeAttackDamage();
	std::cout << " points of damage!" << std::endl;
	std::cout << this->_name << ": Eat bomb, baddie!" << std::endl;
	std::cout << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "SV4G-TP <" << this->_name << "> attacks ";
	std::cout << target << " in the melee, causing " << this->getMeleeAttackDamage();
	std::cout << " points of damage!" << std::endl;
	std::cout << this->_name << ": Heyyah! Take that!" << std::endl;
	std::cout << std::endl;
}

void ScavTrap::challengeNewcomer() const
{
	int rnd;
	std::string tmp;

	std::cout << this->_name << ": It's Newcomer challenge!" << std::endl;
	std::cout << "press ENTER" << std::endl;
	std::getline(std::cin, tmp);
	rnd = std::rand() % 2;
	if (rnd)
		this->_guessTheNumber();
	else
		this->_gameOfDice();
}

void ScavTrap::_guessTheNumber() const
{
	std::cout << "[ Guess The Number ]" << std::endl;
	std::cout << this->_name << ": I'm thinking of a number from 1 to 9: #. Can you guess?" << std::endl;
	int my_num = std::rand() % 9 + 1;
	int your_num = 0;
	std::string str_num;
	while (!your_num)
	{
		std::cout << "PLEASE INPUT A NUMBER FROM 1 TO 9: ";
		std::getline(std::cin, str_num);
		if (!str_num.length() || str_num.length() > 1)
			continue ;
		if (str_num[0] < '1' || str_num[0] > '9')
			continue ;
		your_num = str_num[0] - '0';
	}
	std::cout << "My number is " << my_num << std::endl;
	if (my_num == your_num)
		std::cout << "So you're a bit of a mind reader? O_O" << std::endl;
	else
		std::cout << "At least you tried it!" << std::endl;
	std::cout << std::endl;
}

void ScavTrap::_gameOfDice() const
{
	std::string	tmp;
	int			your_dice;
	int			my_dice;

	std::cout << "[Dice Challenge]" << std::endl;
	std::cout << "You versus me! Me versus you! Either way!" << std::endl;
	std::cout << "Throw the dice (type anything and press Enter): ";
	std::cin >> tmp;
	your_dice = (std::rand() % 6) + 1;
	std::cout << "[YOUR TRY] => " << your_dice << std::endl;
	my_dice = (std::rand() % 6) + 1;
	std::cout << "My turn! * Throws a dice * ... " <<std::endl;
	std::cout << "[SCAV-TP TRY] => " << my_dice << std::endl;
	if (your_dice > my_dice)
		std::cout << "I'll get you next time!" << std::endl;
	else if (your_dice < my_dice)
		std::cout << "Aw yeah!" << std::endl;
	else
		std::cout << "Yay! We both win!" << std::endl;
}
