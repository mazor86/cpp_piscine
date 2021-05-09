#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
public:
	Peon(std::string const &name);
	Peon(Peon const &copy);

	~Peon();

	Peon &operator=(const Peon &copy);

	virtual void getPolymorphed() const;

private:
	Peon();
};

#endif
