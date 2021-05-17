#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
public:
	Pony();
	~Pony();

	const std::string &getName() const;

	const std::string &getColor() const;

	int getAge() const;

private:
	Pony(Pony const & copy);
	Pony &operator=(Pony const & copy);
	std::string	_name;
	std::string _color;
	int			_age;
	int 		_index;

	static const std::string _randomName[5];
	static const std::string _randomColor[4];
	static int _nbCreated;
};

std::ostream &operator<<(std::ostream &ofs, Pony const &obj);
#endif