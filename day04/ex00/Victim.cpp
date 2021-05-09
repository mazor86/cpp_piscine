#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string const &name): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim	&Victim::operator=(const Victim &copy)
{
	this->_name = copy.getName();
	return (*this);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

const std::string &Victim::getName() const
{
	return _name;
}

std::ostream &operator<<(std::ostream & ofs, const Victim &obj)
{
	ofs << "I'm " << obj.getName() <<" and I like otters!" << std::endl;
	return (ofs);
}
