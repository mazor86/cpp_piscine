#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title): _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title;
	std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &copy)
{
	this->_name = copy.getName();
	this->_title = copy.getTitle();
	return (*this);
}

void Sorcerer::polymorph(const Victim &vic) const
{
	vic.getPolymorphed();
}

const std::string &Sorcerer::getName() const
{
	return _name;
}

const std::string &Sorcerer::getTitle() const
{
	return _title;
}

std::ostream &operator<<(std::ostream & ofs, const Sorcerer &obj)
{
	ofs << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return (ofs);
}
