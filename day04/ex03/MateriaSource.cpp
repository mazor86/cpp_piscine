#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_SRC; i++)
		_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	_deleteSrc();
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	_deleteSrc();
	for (int i = 0; i < MAX_SRC; i++)
	{
		_source[i] = copy._source[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (materia)
	{
		for (int i = 0; i < MAX_INV; i++)
		{
			if (!_source[i])
			{
				_source[i] = materia;
				break ;
			}
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < MAX_SRC; i++)
	{
		if (_source[i] && _source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return NULL;
}

void MateriaSource::_deleteSrc()
{
	for (int i = 0; i < MAX_SRC; i++)
	{
		if (_source[i])
		{
			delete _source[i];
			_source[i] = NULL;
		}
	}
}
