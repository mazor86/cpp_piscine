#include "Charlatan.hpp"

Charlatan::Charlatan(const std::string &name, const std::string &title) : Sorcerer(name, title)
{
	std::cout << "And I was born to cheat..." << std::endl;
}

Charlatan::~Charlatan()
{
	std::cout << "Boom!" << std::endl;
}

Charlatan::Charlatan(const Charlatan &copy): Sorcerer(copy.getName(), copy.getTitle())
{
	*this = copy;
	std::cout << "And I was born to cheat..." << std::endl;
}

Charlatan	&Charlatan::operator=(const Charlatan &copy)
{
	Sorcerer::operator=(copy);
	return (*this);
}

void Charlatan::polymorph(const Victim &obj) const
{
	std::cout << "Since I'm a charlatan, " << obj.getName() << " can't become a cute little sheep =(" << std::endl;
}

std::ostream &operator<<(std::ostream &ofs, const Charlatan &obj)
{
	ofs << "Hi! I'm " << obj.getName() << " and I'm liar :)" << std::endl;
	return ofs;
}
