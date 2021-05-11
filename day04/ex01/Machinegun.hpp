#ifndef MACHINEGUN_HPP
# define MACHINEGUN_HPP
# include <iostream>
# include "AWeapon.hpp"

class Machinegun: public AWeapon
{
public:
	Machinegun();
	Machinegun(const Machinegun &copy);
	virtual ~Machinegun();
	virtual Machinegun &operator=(const Machinegun &copy);

	virtual void attack() const;

private:
};

#endif
