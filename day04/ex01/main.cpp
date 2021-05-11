#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Dragon.hpp"
#include "Machinegun.hpp"

void test_main_part()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete pf;
	delete pr;
	delete me;
}

int		main(void)
{
	std::cout << "=======TEST MAIN PART========" << std::endl;
	test_main_part();
	std::cout << "=======TEST ADDITIONAL PART========" << std::endl;

	Character student("Student");

	AWeapon *machinegun = new Machinegun();
	Enemy *dragon = new Dragon();

	std::cout << student;
	student.equip(machinegun);
	std::cout << student;
	student.attack(dragon);
	std::cout << student;
	student.attack(dragon);
	std::cout << student;

	delete machinegun;
	delete dragon;
	return (0);
}
