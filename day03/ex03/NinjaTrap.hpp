#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();

	NinjaTrap & operator=(NinjaTrap const & rhs);

	void ninjaShoebox(ClapTrap &);
	void ninjaShoebox(FragTrap &);
	void ninjaShoebox(ScavTrap &);
	void ninjaShoebox(NinjaTrap &);
};

#endif