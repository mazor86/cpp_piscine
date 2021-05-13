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
	std::cout << MAGENTA << "NORMAL WORK" << RESET << std::endl;
	Bureaucrat signer("Signer", 25);
	std::cout << GREEN << signer << RESET << std::endl;
	Bureaucrat executor("Executor", 5);
	std::cout << GREEN << executor << RESET << std::endl;

	ShrubberyCreationForm tree("tree");
	std::cout << GREEN << tree <<  RESET <<std::endl;
	signer.signForm(tree);
	std::cout << std::endl;
	executor.executeForm(tree);
	std::cout << std::endl;

	PresidentialPardonForm pardon("Ramzan");
	std::cout << GREEN << pardon <<  RESET <<std::endl;
	signer.signForm(pardon);
	std::cout << std::endl;
	executor.executeForm(pardon);
	std::cout << std::endl;

	RobotomyRequestForm request("R2D2");
	std::cout << GREEN << request <<  RESET <<std::endl;
	signer.signForm(request);
	std::cout << std::endl;
	executor.executeForm(request);
	std::cout << std::endl;
	executor.executeForm(request);
	std::cout << std::endl;
	executor.executeForm(request);

	std::cout << MAGENTA << "EXCEPTIONS" << RESET << std::endl;
	for (int i = 0; i < 70; i++)
	{
		signer.decrementGrade();
		executor.decrementGrade();
	}
	std::cout << GREEN << signer << RESET << std::endl;
	std::cout << GREEN << executor << RESET << std::endl;
	std::cout << CYAN << "[Sign Signed form]" << RESET << std::endl;
	signer.signForm(pardon);
	std::cout << std::endl;

	std::cout << CYAN << "[Execute not signed form]" << RESET << std::endl;

	PresidentialPardonForm pardon2("People");
	std::cout << GREEN << pardon2 << RESET << std::endl;
	executor.executeForm(pardon2);
	std::cout << std::endl;

	std::cout << CYAN << "[Execute with low grade]" << RESET << std::endl;
	executor.executeForm(request);


	return (0);
}
