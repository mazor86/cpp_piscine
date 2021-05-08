#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
private:

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();
};


#endif