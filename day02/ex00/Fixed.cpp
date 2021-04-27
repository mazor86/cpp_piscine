#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &inst)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &inst)
		this->_rawBits = inst.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits(int raw) {
	this->_rawBits = raw;
}
