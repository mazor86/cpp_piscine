#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
	const Brain _humanBrain;
public:
	Human();
	~Human();
	Brain const &getBrain() const;
	std::string	identify() const;
};



#endif