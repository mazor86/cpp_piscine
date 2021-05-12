#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>

class ICharacter;

# include "ICharacter.hpp"

# define MAX_INV 4
# define MAX_SRC 4

class AMateria
{
private:
	unsigned int _xp;
	std::string _type;
public:
	AMateria();
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);

	AMateria &operator=(const AMateria & copy);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
