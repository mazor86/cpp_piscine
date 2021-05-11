#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy): Enemy(80, "RadScorpion")
{
	*this = copy;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &copy)
{
	Enemy::operator=(copy);
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
