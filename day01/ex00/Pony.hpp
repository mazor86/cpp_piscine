#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
public:
	Pony();
	~Pony();

private:
	std::string	_name;
	std::string _color;
	int			_age;
	int 		_index;

	static const std::string _randomName[5];
	static const std::string _randomColor[4];
	static int _nbCreated;
};
#endif