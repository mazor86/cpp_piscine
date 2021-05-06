
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

class FragTrap
{
private:
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _level;
	std::string _name;
	unsigned int _meleeAttackDamage;
	unsigned int _rangeAttackDamage;
	unsigned int _armorDamageReduction;
	unsigned int _maxHitPoints;
	unsigned int _maxEnergyPoints;


public:
	FragTrap();
	~FragTrap();

	FragTrap(std::string const & name);
	FragTrap(FragTrap const &src);
	FragTrap & operator=(FragTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
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
