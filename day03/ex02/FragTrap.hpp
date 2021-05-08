
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif
