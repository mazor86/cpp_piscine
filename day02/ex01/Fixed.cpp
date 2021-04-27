#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
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

float Fixed::toFloat(void) const
{
	return 0;
}

int Fixed::toInt(void) const
{
	return 0;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits(int raw) {
	this->_rawBits = raw;
}

std::ostream &operator<<(std::ostream o, const Fixed &f)
{
	o << f.toFloat();
	return o;
}
