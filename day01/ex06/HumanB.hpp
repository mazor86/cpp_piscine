#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
private:
	const std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack() const;
};


#endif