#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(const Convert &copy)
{
	(void)copy;
}

Convert	&Convert::operator=(const Convert &copy)
{
	(void)copy;
	return (*this);
}

Convert::Convert(const char *str) : _strValue(str)
{
	_isCharOrInt = false;
	_isNan = false;
	_isfloat = false;
	if (_strValue[0] == '\'')
		fromCharConv(_strValue);
	else if (_isInt(_strValue))
		_fromIntConv(_strValue);
	else if (_isDouble(_strValue))
		_fromDoubleConv(_strValue);
	else
		_fromFloatConv(_strValue);
}

Convert::~Convert()
{
}

void Convert::fromCharConv(const char *str)
{
	_isCharOrInt = true;
	_char = (str[1]);
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void Convert::_fromIntConv(const char *str)
{
	_isCharOrInt = true;
	_int = (atoi(str));
	if (_int >= 0 && _int <= 126)
		_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void Convert::_fromDoubleConv(const char *str)
{
	std::string check;
	check = str;
	_double = atof(str);
	_float = static_cast<float>(_double);
	if (check == "nan" || check == "inf" || check == "-inf")
		_isNan = true;
	else
	{
		_int = static_cast<int>(_double);
		if (_int >= 0 && _int <= 126)
			_char = static_cast<char>(_int);
	}
}

void Convert::_fromFloatConv(const char *str)
{
	std::string check;
	check = str;
	_isfloat = true;
	_float = static_cast<float>(atof(str));
	_double = static_cast<double>(_float);
	if (check == "nanf" || check == "inff" || check == "-inff")
		_isNan = true;
	else
	{
		_int = static_cast<int>(_double);
		if (_int >= 0 && _int <= 126)
			_char = static_cast<char>(_int);
	}
}

bool Convert::_isDouble(const char *str)
{
	std::string check(str);
	if (check[check.length() - 1] != 'f')
		return true;
	if (check == "inf" || check == "-inf")
		return true;
	return false;
}

int Convert::getInt() const
{
	return _int;
}

char Convert::getChar() const
{
	return _char;
}

float Convert::getFloat() const
{
	return _float;
}

double Convert::getDouble() const
{
	return _double;
}

const char *Convert::getStrValue() const
{
	return _strValue;
}

bool Convert::isCharOrInt() const
{
	return _isCharOrInt;
}

bool Convert::isNan() const
{
	return _isNan;
}

bool Convert::isfloat() const
{
	return _isfloat;
}

bool Convert::_isInt(const char *str)
{
	if (*str == '-')
		str++;
	while (*str)
	{
		if (!isdigit(*str))
			return false;
		str++;
	}
	return true;
}

std::ostream &operator<<(std::ostream &ofs, Convert &obj)
{
	std::string output(obj.getStrValue());
	ofs << "char: ";
	if (!obj.isNan())
	{
		if (isprint(obj.getChar()))
			ofs << "\'" << obj.getChar() << "\'" << std::endl;
		else
			ofs << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	ofs << "int: ";
	if (!obj.isNan())
		ofs << obj.getInt() << std::endl;
	else
		ofs << "impossible" << std::endl;
	if (obj.isCharOrInt())
	{
		ofs << "float: " << std::setprecision(1) << std::fixed<< obj.getFloat();
		ofs << "f" << std::endl;
		ofs << "double: " << std::setprecision(1) << std::fixed<< obj.getDouble();
		ofs << std::endl;
	}
	else
	{
		if (obj.isfloat())
		{
			ofs << "float: " << output << std::endl;
			ofs << "double: " << output.substr(0, output.length() - 1) << std::endl;
		}
		else
		{
			ofs << "float: " << output << "f" << std::endl;
			ofs << "double: " << output << std::endl;
		}
	}
	return ofs;
}


