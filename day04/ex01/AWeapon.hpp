#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>

class AWeapon
{
public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &copy);
	virtual ~AWeapon();
	virtual AWeapon &operator=(const AWeapon &copy);

	const std::string &getType() const;

	int getAPcost() const;

	int getDamage() const;

	virtual void attack() const = 0;
private:
	std::string _type;
	int _apcost;
	int _damage;
};

#endif
