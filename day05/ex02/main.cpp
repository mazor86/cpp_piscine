#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <ctime>
#define RESET		"\x1B[0m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

int		main(void)
{
	srand(time(0));
	std::cout << CYAN << "******************* EX02 *******************" << RESET << std::endl;
	std::cout << std::endl;
	Bureaucrat signer("Signer", 1);
	Bureaucrat executor("Executor", 1);
	ShrubberyCreationForm tree("tree");

	signer.signForm(tree);
	executor.executeForm(tree);
	std::cout << std::endl;
	std::cout << std::endl;

	PresidentialPardonForm pardon("Ramzan");
	signer.signForm(pardon);
	executor.executeForm(pardon);
	std::cout << std::endl;

	RobotomyRequestForm request("R2D2");
	signer.signForm(request);
	executor.executeForm(request);
	executor.executeForm(request);
	executor.executeForm(request);


	return (0);
}
