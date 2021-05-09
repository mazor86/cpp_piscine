#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();

	NinjaTrap & operator=(NinjaTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	
	void ninjaShoebox(ClapTrap &);
	void ninjaShoebox(FragTrap &);
	void ninjaShoebox(ScavTrap &);
	void ninjaShoebox(NinjaTrap &);
	
protected:
	static const unsigned int _initHitPoints = 60;
	static const unsigned int _initMaxHitPoints = 60;
	static const unsigned int _initEnergyPoints = 120;
	static const unsigned int _initMaxEnergyPoints = 120;
	static const unsigned int _initLevel = 1;
	static const unsigned int _initMeleeAttackDamage = 60;
	static const unsigned int _initRangeAttackDamage = 5;
	static const unsigned int _initArmorDamageReduction = 0;
};

#endif