
#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
}

Cure	&Cure::operator=(const Cure &copy)
{
	AMateria::operator=(copy);
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
