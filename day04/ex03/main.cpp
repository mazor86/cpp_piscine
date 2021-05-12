#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

#define RESET		"\x1B[0m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

int		main(void)
{
	std::cout << MAGENTA << "=======TEST MAIN PART========" << RESET << std::endl;
	std::cout << std::endl;

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	std::cout << MAGENTA << "=======TEST ADDITONAL PART========" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << CYAN << "/...........Try to create non-existent materia.........../" << RESET << std::endl;
	tmp = src->createMateria("earth");
	if (!tmp)
		std::cout << "This materia doesn't exist" << std::endl;
	else
		std::cout << GREEN << "ERROR" << RESET << std::endl;
	std::cout << CYAN << "/...........Try to learn more than 4 materia.........../" << RESET << std::endl;
	AMateria *array[5];
	for (int i = 0; i < 5; i++)
		array[i] = new Ice();
	for (int i = 0; i < 5; i++)
		src->learnMateria(array[i]);
	std::cout << "If program is working than ALL GOOD :)" << std::endl;
	std::cout << CYAN << "/...........Show that materia is created with 0 HP.........../" << RESET << std::endl;
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	std::cout << tmp->getType() << ": XP = " << tmp->getXP() << std::endl;
	std::cout << CYAN << "/...........and after use() increases by 10 HP.........../" << RESET << std::endl;
	std::cout << CYAN << "use()" << RESET << std::endl;
	bob->use(0, *me);
	std::cout << tmp->getType() << ": XP = " << tmp->getXP() << std::endl;
	std::cout << CYAN << "use()" << RESET << std::endl;
	bob->use(0, *me);
	std::cout << tmp->getType() << ": XP = " << tmp->getXP() << std::endl;
	std::cout << std::endl;
	std::cout << CYAN << "/...........If no materia in inventory slot, nothing happened.........../" << RESET << std::endl;
	std::cout << CYAN << "_________________________________________________________" << RESET << std::endl;
	std::cout << CYAN << "use()" << RESET << std::endl;
	bob->use(1, *me);
	std::cout << CYAN << "_________________________________________________________" << RESET << std::endl;
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	for (int i = 2; i < 5; i++)
	{
		if (array[i])
			delete array[i];
	}
	return (0);
}
