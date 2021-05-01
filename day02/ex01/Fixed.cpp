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
	this->_rawBits = n << Fixed::_fractBit;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)std::roundf(f * (1 << Fixed::_fractBit));
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
	return (*this);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (1 << Fixed::_fractBit));
}

int Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_fractBit);
}

int Fixed::getRawBits() const
{
	return (this->_rawBits);
}

void Fixed::setRawBits(int raw) {
	this->_rawBits = raw;
}

std::ostream &operator<<(std::ostream & o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}
