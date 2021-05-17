#include "span.hpp"

Span::Span():_N(0), _array(std::vector<int>(0))
{
}

Span::Span(int n) : _N(n), _array(std::vector<int>(0))
{
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span	&Span::operator=(const Span &copy)
{
	_N = copy._N;
	_array = copy._array;
	return (*this);
}

void Span::addNumber(int number)
{
	if (_array.size() == _N)
		throw AlreadyFullException();
	_array.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_array.size() + std::distance(begin, end) > _N)
		throw AlreadyFullException();
	_array.assign(begin, end);
}

int Span::shortestSpan() const
{
	if (_array.size() < 2)
		throw NotEnoughNumbersException();
	std::vector<int> sortArray = _array;
	std::sort(sortArray.begin(), sortArray.end());
	int diff;
	int shortSpan = sortArray[1] - sortArray[0];
	for (unsigned int i = 2; i < sortArray.size(); i++)
	{
		diff = sortArray[i] - sortArray[i - 1];
		if (diff < shortSpan)
			shortSpan = diff;
	}
	return shortSpan;
}

int Span::longestSpan() const
{
	if (_array.size() < 2)
		throw NotEnoughNumbersException();
	int min = *std::min_element(_array.begin(), _array.end());
	int max = *std::max_element(_array.begin(), _array.end());

	return max - min;
}

const std::vector<int> &Span::getArray() const
{
	return _array;
}

const char *Span::AlreadyFullException::what() const throw()
{
	return "Container is full";
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return "Not enough numbers in container for calculation Span";
}