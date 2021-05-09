#ifndef CHARLATAN_HPP
# define CHARLATAN_HPP
# include <iostream>
# include <string>
# include "Sorcerer.hpp"

class Charlatan: public Sorcerer
{
public:
	Charlatan();
	~Charlatan();

	Charlatan(const std::string &name, const std::string &title);

	Charlatan(const Charlatan &copy);
	Charlatan &operator=(const Charlatan &copy);

	virtual void polymorph(Victim const &) const;
private:
};

std::ostream &operator<<(std::ostream & ofs, const Charlatan &obj);

#endif
