#ifndef DRAGON_HPP
# define DRAGON_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class Dragon: public Enemy
{
public:
	Dragon();
	Dragon(const Dragon &copy);
	virtual ~Dragon();
	Dragon &operator=(const Dragon &copy);

	virtual void takeDamage(int damage);

private:
};

#endif
