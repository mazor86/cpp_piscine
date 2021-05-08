#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void test_FragTrap(void)
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

	frag1.takeDamage(3);

	frag2.vaulthunter_dot_exe(frag1.getName());
	frag2.vaulthunter_dot_exe(frag1.getName());
	frag2.vaulthunter_dot_exe(frag1.getName());
	frag2.vaulthunter_dot_exe(frag1.getName());
	frag2.vaulthunter_dot_exe(frag1.getName());
}

void test_ScavTrap(void)
{
	ScavTrap scav1("Sparky");
	ScavTrap scav2("Rust");
	ScavTrap scav3(scav2);

	scav1.meleeAttack(scav3.getName());
	scav3.takeDamage(scav1.getMeleeAttackDamage());
	
	scav1.rangedAttack(scav3.getName());
	scav3.takeDamage(scav1.getRangeAttackDamage());

	scav3.takeDamage(1);
	scav2.takeDamage(110);

	scav3.beRepaired(20);

	scav1.challengeNewcomer();
	scav1.challengeNewcomer();
	scav1.challengeNewcomer();

}

void test_ClapTrap(void)
{
	ClapTrap clap2("Clank");
	ClapTrap clap3(clap2);
}

int main()
{
	std::srand(std::time(0));

	std::cout << "***** EX00 *****" << std::endl;
	test_FragTrap();
	std::cout << "***** EX01 *****" << std::endl;
	test_ScavTrap();
	std::cout << "***** EX02 *****" << std::endl;
	test_ClapTrap();

	return 0;
}
