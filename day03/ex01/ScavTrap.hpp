#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
private:
	unsigned int _hitPoints;
	unsigned int _maxHitPoints;
	unsigned int _energyPoints;
	unsigned int _maxEnergyPoints;
	unsigned int _level;
	std::string _name;
	unsigned int _meleeAttackDamage;
	unsigned int _rangeAttackDamage;
	unsigned int _armorDamageReduction;
	void _guessTheNumber(void) const;
	void _gameOfDice(void) const;

public:
	ScavTrap();
	~ScavTrap();

	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const &src);
	ScavTrap & operator=(ScavTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void) const;

	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getLevel() const;
	const std::string &getName() const;
	unsigned int getMeleeAttackDamage() const;
	unsigned int getRangeAttackDamage() const;
	unsigned int getArmorDamageReduction() const;
	unsigned int getMaxHitPoints() const;
	unsigned int getMaxEnergyPoints() const;
};


#endif
