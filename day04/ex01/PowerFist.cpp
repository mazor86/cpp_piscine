#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist &copy): AWeapon("Power Fist", 8, 50)
{
	*this = copy;
}

PowerFist	&PowerFist::operator=(const PowerFist &copy)
{
	AWeapon::operator=(copy);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
