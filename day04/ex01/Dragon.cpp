#include "Dragon.hpp"

Dragon::Dragon(): Enemy(100, "Zmey Gorynich")
{
	std::cout << this->getType() << " :R-r-r-r-r" << std::endl;
}

Dragon::~Dragon()
{
	std::cout << "I'll be back!" << std::endl;
}

Dragon::Dragon(const Dragon &copy): Enemy(100, "Zmey Gorynich")
{
	*this = copy;
}

Dragon	&Dragon::operator=(const Dragon &copy)
{
	Enemy::operator=(copy);
	return (*this);
}

void Dragon::takeDamage(int damage)
{
	std::cout << "[ " << this->getType() << " HP before attack: " << this->getHP() << " ]" << std::endl;
	std::cout << this->getType() << ": How dare you???" << std::endl;
	Enemy::takeDamage(damage);
	if (this->getHP() == 0)
	{
		this->setHp(100);
		std::cout << this->getType() << " You can't kill me! Ha-ha-ha" << std::endl;
	}
	std::cout << "[ " << this->getType() << " HP after attack: " << this->getHP() << " ]" << std::endl;
}
