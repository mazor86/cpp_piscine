#include "Peon.hpp"

Peon::Peon(): Victim("Peon")
{
}

Peon::Peon(const std::string &name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy): Victim(copy.getName())
{
	*this = copy;
	std::cout << "Zog zog." << std::endl;
}

Peon	&Peon::operator=(const Peon &copy)
{
	Victim::operator=(copy);
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
