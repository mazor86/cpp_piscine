#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

class NotFindException: public std::exception
{
	const char * what() const throw()
	{
		return (" is not found");
	}
};

template<typename T>
typename T::iterator easyfind(T arr, int needle)
{
	typename T::iterator it;
	it = std::find(arr.begin(), arr.end(), needle);
	if (it == arr.end())
		throw NotFindException();
	else
		return it;
}

#endif