#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# define FRACT_LENGTH 8

class Fixed {
public:
	Fixed();
	Fixed(int const n);
	Fixed(float const f);
	Fixed( Fixed const & src);
	~Fixed();

	Fixed & operator=(Fixed const & inst);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits() const;
	void setRawBits(int raw);

private:
	int _rawBits;
	static const int _fractBit = FRACT_LENGTH;
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);
#endif
