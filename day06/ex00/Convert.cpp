#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(const Convert &copy)
{
}

Convert	&Convert::operator=(const Convert &copy)
{
	return (*this);
}

Convert::Convert(const char *str) : _str_value(str)
{
	_init_ptr_to_NULL();
}

Convert::~Convert()
{
}

void Convert::_init_ptr_to_NULL()
{
	_int = NULL;
	_char = NULL;
	_float = NULL;
	_double = NULL;
}
