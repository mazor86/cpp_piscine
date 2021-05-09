#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer();
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(const Sorcerer &copy);
	~Sorcerer();

	Sorcerer &operator=(const Sorcerer &copy);

	void polymorph(Victim const &) const;
	const std::string &getName() const;

	const std::string &getTitle() const;
private:
	std::string _name;

	std::string _title;
};

std::ostream &operator<<(std::ostream & ofs, const Sorcerer &obj);

#endif
