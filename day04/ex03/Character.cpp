#include "Character.hpp"

Character::Character(): _name("default_Character")
{
	for (int i = 0; i < MAX_INV; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < MAX_INV; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	_deleteInventory();
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character	&Character::operator=(const Character &copy)
{
	_deleteInventory();
	for (int i = 0; i < MAX_INV; i++)
	{
		_inventory[i] = copy._inventory[i];
	}
	_name = copy._name;

	return (*this);
}

const std::string &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (m)
	{
		for (int i = 0; i < MAX_INV; i++)
		{
			if (!_inventory[i])
			{
				_inventory[i] = m;
				break ;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= MAX_INV && _inventory[idx])
		_inventory[idx] = NULL;

}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= MAX_INV && _inventory[idx])
	{
		(_inventory[idx])->use(target);
	}
}

void Character::_deleteInventory()
{
	for (int i = 0; i < MAX_INV; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}
