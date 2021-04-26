#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
	Zombie();
	~Zombie();

	void	announce();

private:
	std::string	_name;
	std::string _type;

	static const std::string	_randomNames[20];
	static const std::string	_randomType[10];

	static std::string			_getRandomName();
	static std::string			_getRandomType();

};
#endif