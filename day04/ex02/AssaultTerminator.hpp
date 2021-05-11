#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>

class AssaultTerminator
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &copy);
	~AssaultTerminator();
	AssaultTerminator &operator=(const AssaultTerminator &copy);

private:
};

#endif
