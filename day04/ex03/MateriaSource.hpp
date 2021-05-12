#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &copy);

	void learnMateria(AMateria *materia);

	AMateria *createMateria(const std::string &type);
private:
	AMateria* _source[4];
	void _deleteSrc();
};

#endif
