#include "Base.hpp"

Base *generate(void)
{
	int i;

	i = rand() % 3;
	switch (i)
	{
		case 1:
			return new B;
		case 2:
			return new C;
		default:
			return new A;
	}
}

void identify_from_pointer(Base * p)
{
	A *ptrA = dynamic_cast<A*>(p);
	if (ptrA != 0) {
		std::cout << "It's pointer to Class A" << std::endl;
		return ;
	}
	B *ptrB = dynamic_cast<B*>(p);
	if (ptrB != 0) {
		std::cout << "It's pointer to Class B" << std::endl;
		return ;
	}
	C *ptrC = dynamic_cast<C*>(p);
	if (ptrC != 0) {
		std::cout << "It's pointer to Class C" << std::endl;
		return ;
	}
}

void identify_from_reference(Base & p)
{
	try {
		A &refA = dynamic_cast<A&>(p);
		(void)refA;
		std::cout << "It's reference to Class A" << std::endl;
	}
	catch (std::bad_cast &badCast) {
	}
	try {
		B &refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "It's reference to Class B" << std::endl;
	}
	catch (std::bad_cast &badCast) {
	}
	try {
		C &refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "It's reference to Class C" << std::endl;
	}
	catch (std::bad_cast &badCast) {
	}
}

int main()
{
	srand(time(NULL));
	Base* base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	return 0;
}