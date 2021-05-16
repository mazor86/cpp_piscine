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
	std::cout << MAGENTA << "<int>" << RESET << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << GREEN << "swap" << RESET << std::endl;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "<float>" << RESET << std::endl;
	float e = 4.2;
	float f = 2.1;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	swap( e, f );
	std::cout << GREEN << "swap" << RESET << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "<std::string>" << RESET << std::endl;
	std::string str1 = "string1";
	std::string str2 = "string2";
	std::cout << "str1 = " << str1 << std::endl << "str2 = " << str2 << std::endl;
	std::cout << GREEN << "swap" << RESET << std::endl;
	swap( str1, str2 );
	std::cout << "str1 = " << str1 << std::endl << "str2 = " << str2 << std::endl;
	std::cout << "min( str1, str2 ) = " << ::min( str1, str2 ) << std::endl;
	std::cout << "max( str1, str2 ) = " << ::max( str1, str2 ) << std::endl;
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