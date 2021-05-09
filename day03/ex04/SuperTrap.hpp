#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &copy);
	~SuperTrap();
	SuperTrap &operator=(const SuperTrap &copy);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);

};

#endif
