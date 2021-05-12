#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
public:
	Character();
	Character(std::string const & name);
	Character(const Character &copy);

	virtual ~Character();
	Character &operator=(const Character &copy);

	virtual const std::string &getName() const;

	virtual void equip(AMateria *m);

	virtual void unequip(int idx);

	virtual void use(int idx, ICharacter &target);

private:
	std::string _name;
	AMateria* _inventory[MAX_INV];

	void _deleteInventory();
};

#endif
