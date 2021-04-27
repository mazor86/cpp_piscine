#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed( Fixed const & src);
	Fixed & operator=(Fixed const & inst);
	~Fixed();

	int getRawBits() const;

	void setRawBits(int raw);

private:
	int _rawBits;
	static const int _fractBit = 8;
};


#endif
