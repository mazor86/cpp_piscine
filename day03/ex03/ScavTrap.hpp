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

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer(void) const;
};

#endif
