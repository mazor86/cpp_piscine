#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>

class Convert
{
public:
	Convert (const char *str);
	~Convert();

	class UnknownTypeException: public std::exception
	{
	public:
		const char * what() const throw();
	};

private:
	Convert(const Convert &copy);
	Convert &operator=(const Convert &copy);
	const char *_str_value;
	int *_int;
	char *_char;
	float *_float;
	double *_double;

	Convert();

	void _init_ptr_to_NULL();
};

#endif
