#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &copy);
	virtual ~PowerFist();
	virtual PowerFist &operator=(const PowerFist &copy);

	virtual void attack() const;

private:
};

#endif
