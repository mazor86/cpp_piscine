#include "Squad.hpp"

Squad::Squad(): _count(0), _squad(NULL)
{
}

Squad::~Squad()
{
	if (_count)
	{
		for (int i = 0; i < _count; i++)
			delete _squad[i];
		delete [] _squad;
	}
}

Squad::Squad(const Squad &copy)
{
	_count = copy._count;
	_squad = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_squad[i] = copy._squad[i];
}

Squad	&Squad::operator=(const Squad &copy)
{
	if (_count)
	{
		for (int i = 0; i < _count; i++)
			delete _squad[i];
		delete[] _squad;
	}
	_squad = new ISpaceMarine *[copy._count];
	_count = copy._count;
	for (int i = 1; i < _count; i++)
		_squad[i] = copy._squad[i];
	return (*this);
}

int Squad::getCount() const
{
	return _count;
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (i >= 0 && i < _count)
		return (_squad[i]);
	return (NULL);
}

int Squad::push(ISpaceMarine *marine)
{
	if (marine && _notInSquad(marine))
	{
		ISpaceMarine **temp = _squad;
		_squad = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			_squad[i] = temp[i];
		_squad[_count] = marine;
		_count++;
	}
	return _count;
}

int Squad::_notInSquad(ISpaceMarine *marine)
{
	for (int i = 0; i < _count; i++)
	{
		if (_squad[i] == marine)
			return 0;
	}
	return 1;
}