#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
public:
	Span(int n);
	Span(const Span &copy);
	~Span();
	Span &operator=(const Span &copy);

	void addNumber(int number);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan() const;
	int longestSpan() const;

	const std::vector<int> &getArray() const;

	class AlreadyFullException: public std::exception
	{
	public:
		const char * what() const throw();
	};
	class NotEnoughNumbersException: public std::exception
	{
	public:
		const char * what() const throw();
	};
private:
	unsigned int _N;
	std::vector<int> _array;
	Span();
};

#endif