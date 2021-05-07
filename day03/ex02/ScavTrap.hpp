#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
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
