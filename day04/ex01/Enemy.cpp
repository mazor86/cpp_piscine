#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy	&Enemy::operator=(const Enemy &copy)
{
	this->_hp = copy.getHP();
	this->_type = copy.getType();
	return (*this);
}

std::string const &Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
}

void Enemy::setHp(int hp)
{
	_hp = hp;
}
