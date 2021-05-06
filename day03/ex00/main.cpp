#include "FragTrap.hpp"

int main()
{
	FragTrap frag1("R2D2");
	FragTrap frag2("Wall-e");
	FragTrap frag3(frag2);

	frag1.meleeAttack(frag3.getName());
	frag3.takeDamage(frag1.getMeleeAttackDamage());
	frag1.meleeAttack(frag3.getName());
	frag3.takeDamage(frag1.getMeleeAttackDamage());
	frag1.meleeAttack(frag3.getName());
	frag3.takeDamage(frag1.getMeleeAttackDamage());
	frag1.rangedAttack(frag3.getName());
	frag3.takeDamage(frag1.getRangeAttackDamage());
	frag1.rangedAttack(frag3.getName());
	frag3.takeDamage(frag1.getRangeAttackDamage());

	frag2.meleeAttack(frag1.getName());
	frag1.takeDamage(frag3.getMeleeAttackDamage());
	frag1.beRepaired(10);
	frag1.beRepaired(30);

	return 0;
}
