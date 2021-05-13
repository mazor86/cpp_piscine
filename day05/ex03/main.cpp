#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <ctime>
#define RESET		"\x1B[0m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

int		main(void)
{
	Intern someIntern;
	Form* rrf;

	rrf = someIntern.makeForm("robotomy request", "Bender");
	std::cout << GREEN << *rrf << RESET << std::endl;
	try
	{
		Form* pardon = someIntern.makeForm("NO", "God");
		std::cout << GREEN << *pardon << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << MAGENTA << e.what() << RESET << std::endl;
	}
	Form* pardon = someIntern.makeForm("presidential pardon", "President");
	std::cout << GREEN << *pardon << RESET << std::endl;

	Form* shrub = someIntern.makeForm("shrubbery creation", "tree");
	std::cout << GREEN << *shrub << RESET << std::endl;

	delete rrf;
	delete pardon;
	delete shrub;
	return (0);
}
