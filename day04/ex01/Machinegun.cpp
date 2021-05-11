#include "Machinegun.hpp"

Machinegun::Machinegun(): AWeapon("Machine Gun", 15, 50)
{
}

Machinegun::~Machinegun()
{
}

Machinegun::Machinegun(const Machinegun &copy): AWeapon("Machine Gun", 15, 50)
{
	*this = copy;
}

Machinegun	&Machinegun::operator=(const Machinegun &copy)
{
	AWeapon::operator=(copy);
	return (*this);
}

void Machinegun::attack() const
{
	std::cout << "* tra-ta-ta-ta-ta *" << std::endl;
}
