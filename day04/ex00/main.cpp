#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Charlatan.hpp"

void main_part()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
}

int		main(void)
{
	main_part();
	std::cout << "=========================================" << std::endl;
	Charlatan charlie("Charlie", "Cheater");
	Victim john("John");
	std::cout << charlie;
	charlie.polymorph(john);
	return (0);
}
