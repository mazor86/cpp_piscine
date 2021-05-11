#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & type, int apcost, int damage): _type(type), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon	&AWeapon::operator=(const AWeapon &copy)
{
	this->_type = copy._type;
	this->_apcost = copy._apcost;
	this->_damage = copy._damage;
	return (*this);
}

const std::string &AWeapon::getType() const
{
	return _type;
}

int AWeapon::getAPcost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}

