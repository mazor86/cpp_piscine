#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
private:
	int _hp;
	std::string _type;
public:
	Enemy();
	Enemy(const Enemy &copy);

	Enemy(int hp, const std::string &type);

	Enemy &operator=(const Enemy & copy);
	virtual ~Enemy();

	virtual void takeDamage(int);

	std::string const & getType() const;
	int getHP() const;

	void setHp(int hp);
};

#endif
