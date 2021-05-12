#include "AMateria.hpp"

AMateria::AMateria(): _xp(0), _type("materia")
{
}

AMateria::AMateria(std::string const & type): _xp(0), _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	this->_xp = copy.getXP();
	return (*this);
}

std::string const &AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
