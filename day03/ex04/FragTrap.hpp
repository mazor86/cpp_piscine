
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	void _clapInTheBoxAttack(std::string const & target);
	void _gunWizardAttack(std::string const & target);
	void _laserInfernoAttack(std::string const & target);
	void _oneShotWonderAttack(std::string const & target);
	void _pirateShipModeAttack(std::string const & target);

public:
	FragTrap();
	~FragTrap();

	FragTrap(std::string const & name);
	FragTrap(FragTrap const &src);

	FragTrap & operator=(FragTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);

protected:
	static const unsigned int _initHitPoints = 100;
	static const unsigned int _initMaxHitPoints = 100;
	static const unsigned int _initEnergyPoints = 100;
	static const unsigned int _initMaxEnergyPoints = 100;
	static const unsigned int _initLevel = 1;
	static const unsigned int _initMeleeAttackDamage = 30;
	static const unsigned int _initRangeAttackDamage = 20;
	static const unsigned int _initArmorDamageReduction = 5;
};

#endif
