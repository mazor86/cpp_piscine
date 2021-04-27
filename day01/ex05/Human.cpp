#include "Human.hpp"

Human::Human(): _humanBrain(Brain())
{
}

Human::~Human()
{
}

Brain const &Human::getBrain() const
{
	Brain const &ref = this->_humanBrain;
	return (ref);
}

std::string Human::identify() const
{
	return (this->_humanBrain).identify();
}