#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

# define AP_INIT 40

class Character
{
private:
	std::string _name;
	int _AP;
	AWeapon * _weapon;
public:
	Character(std::string const & name);
	Character();
	~Character();
	Character(const Character &copy);


	Character &operator=(const Character &copy);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const &getName() const;
	int getAp() const;
	AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream & ofs, const Character &obj);

#endif
