#include "whatever.hpp"
#include <iostream>
#include <string>
# define RESET		"\x1B[0m"
# define GREEN		"\x1B[32m"
# define MAGENTA	"\x1B[35m"

class
Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n);}
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n);}
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n);}
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n);}
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n);}
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n);}
	int getN() const { return this->_n; }
private:
	int _n;
}
;
std::ostream & operator<<(std::ostream &os, const Awesome &awesome) {
	os << awesome.getN();
	return os;
}

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "<Awesome>" << RESET << std::endl;
	Awesome aOne(21);
	Awesome aTwo(42);
	std::cout << "aOne = " << aOne << ", aTwo = " << aTwo << std::endl;
	std::cout << GREEN << "swap" << RESET << std::endl;

	::swap(aOne, aTwo );
	std::cout << "aOne = " << aOne << ", awTwo = " << aTwo << std::endl;
	std::cout << "min( aOne, aTwo ) = " << ::min(aOne, aTwo ) << std::endl;
	std::cout << "max( aOne, aTwo ) = " << ::max(aOne, aTwo ) << std::endl;

}