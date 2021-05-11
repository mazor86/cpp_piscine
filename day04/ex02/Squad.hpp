#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad
{
public:
	Squad();
	Squad(const Squad &copy);
	~Squad();
	Squad &operator=(const Squad &copy);

	int getCount() const;

	ISpaceMarine *getUnit(int i) const;

	int push(ISpaceMarine *marine);

private:
	int _count;
	ISpaceMarine** _squad;

	int _notInSquad(ISpaceMarine *);
};

#endif
