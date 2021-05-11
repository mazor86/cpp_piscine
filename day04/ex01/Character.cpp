#include "Character.hpp"

Character::Character(): _name("Character"), _AP(AP_INIT), _weapon(NULL)
{
}

Character::Character(const std::string &name): _name(name), _AP(AP_INIT), _weapon(NULL)
{
}

Character::~Character()
{
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character	&Character::operator=(const Character &copy)
{
	this->_name = copy._name;
	this->_AP = copy._AP;
	this->_weapon = copy._weapon;
	return (*this);
}

std::string const &Character::getName() const
{
	return _name;
}

int Character::getAp() const
{
	return _AP;
}

AWeapon *Character::getWeapon() const
{
	return _weapon;
}

void Character::recoverAP()
{
	this->_AP += 10;
	if (this->_AP > AP_INIT)
		this->_AP = AP_INIT;
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->_weapon && this->_AP >= this->_weapon->getAPcost())
	{
		std::cout << this->_name << " attacks "<< enemy->getType() << " with a " << this->_weapon->getType() << std::endl;
		this->_weapon->attack();
		this->_AP -= this->_weapon->getAPcost();
		enemy->takeDamage(this->_weapon->getDamage());
		if (!enemy->getHP())
			delete enemy;
	}
}

std::ostream &operator<<(std::ostream &ofs, const Character &obj)
{
	if (obj.getWeapon())
		ofs << obj.getName() << " has " << obj.getAp() << " AP and wields a " << (obj.getWeapon())->getType() << std::endl;
	else
		ofs << obj.getName() << " has " << obj.getAp() << " AP and is unarmed" << std::endl;
	return ofs;
}
