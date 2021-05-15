#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Convert
{
public:
	Convert (const char *str);
	~Convert();

	int getInt() const;

	char getChar() const;

	float getFloat() const;

	double getDouble() const;

	const char *getStrValue() const;

	bool isCharOrInt() const;

	bool isNan() const;

	bool isfloat() const;

private:
	Convert(const Convert &copy);
	Convert &operator=(const Convert &copy);
	const char *_strValue;
	bool _isCharOrInt;
	bool _isNan;
	bool _isfloat;
	int _int;
	char _char;
	float _float;
	double _double;

	Convert();

	void fromCharConv(const char *str);
	void _fromIntConv(const char *str);
	void _fromFloatConv(const char *str);
	void _fromDoubleConv(const char *str);
	bool _isInt(const char *str);
	bool _isDouble(const char *str);
};

std::ostream &operator<<(std::ostream &ofs, Convert &obj);
#endif
