
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
	static unsigned int _maxHitPoints;
	static unsigned int _maxEnergyPoints;


public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap & operator=(FragTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	unsigned int getHP(void);
	unsigned int getEP(void);
	std::string getName(void);

};


#endif
