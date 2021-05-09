#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>

class Victim
{
public:
	Victim(std::string const &name);
	Victim(const Victim &copy);
	virtual ~Victim();
	Victim &operator=(const Victim &copy);

	virtual void getPolymorphed() const;
	const std::string &getName() const;

protected:
	std::string _name;
private:
	Victim();
};

std::ostream &operator<<(std::ostream & ofs, const Victim &obj);

#endif
