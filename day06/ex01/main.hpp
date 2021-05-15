#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>
# include <string>
# include <limits>
# define RESET		"\x1B[0m"
# define RED_BOLD	"\x1B[1;31m"
# define GREEN		"\x1B[32m"

# define MAX_STRING_LEN 20

struct Data
{
	std::string str1;
	int i;
	std::string str2;
};

#endif
