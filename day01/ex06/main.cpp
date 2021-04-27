#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	lub = Weapon("crude spiked club");
		HumanB	jim("Jim");
		jim.setWeapon(lub);
		jim.attack();
		lub.setType("some other type of club");
		jim.attack();
	}
	return 0;
}