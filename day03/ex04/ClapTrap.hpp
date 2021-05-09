#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	unsigned int _hitPoints;
	unsigned int _maxHitPoints;
	unsigned int _energyPoints;
	unsigned int _maxEnergyPoints;
	unsigned int _level;
	std::string _name;
	unsigned int _meleeAttackDamage;
	unsigned int _rangeAttackDamage;
	unsigned int _armorDamageReduction;
public:
	ClapTrap();
	virtual ~ClapTrap();
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const & src);

	ClapTrap & operator=(ClapTrap const & rhs);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

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