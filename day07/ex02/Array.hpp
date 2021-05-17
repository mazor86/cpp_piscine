#ifndef ARRAY_HPP
# define ARRAY_HPP
template <typename T>
class Array
{
private:
	unsigned int _n;
	T *_array;
public:
	Array(): _n(0), _array(new T[0])
	{
	}

	Array(unsigned int n): _n(n), _array(new T[n])
	{
	}
	
	Array(Array<T> &copy)
	{
		_array = new T[copy._n];
		_n = copy._n;
		for (int i = 0; i < _n; i++)
			_array[i] = copy[i];
	}

	Array<T> &operator=(Array<T> &copy)
	{
		delete [] _array;
		_array = new T[copy._n];
		_n = copy._n;
		for (unsigned int i = 0; i < _n; i++)
			_array[i] = copy[i];
		return *this;
	}

	unsigned int size() const
	{
		return _n;
	}

	T &operator[](unsigned int i)
	{
		if (i >= this->size())
			throw SizeException();
		return _array[i];
	}

	class SizeException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Wrong [] argument");
		}
	};
};

#endif