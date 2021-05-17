#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <stack>
# include <list>
template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack() {}

	virtual ~MutantStack() {}

	MutantStack(MutantStack<T> const &copy)
	{
		*this = copy;
	}

	MutantStack<T> &operator=(MutantStack<T> const &copy)
	{
		*this = copy;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}






};
#endif