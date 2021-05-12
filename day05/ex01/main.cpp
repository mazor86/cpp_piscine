#include "Bureaucrat.hpp"
#include "Form.hpp"
#define RESET		"\x1B[0m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

void test_00()
{
	std::cout << std::endl;
	std::cout << MAGENTA << "===== Constructors =====" << RESET << std::endl;
	std::cout << GREEN << "Normal:" << RESET << std::endl;
	try
	{
		Bureaucrat official("cog", 150);
		std::cout << official;
	}
	catch (std::exception &ex)
	{
		std::cout <<CYAN << ex.what() << RESET << std::endl;
	}
	std::cout << GREEN << "Grade 151:" << std::endl;
	try
	{
		Bureaucrat official1("thief", 151);
		std::cout << official1;
	}
	catch (std::exception &ex)
	{
		std::cout <<CYAN << ex.what() << RESET << std::endl;
	}
	std::cout << GREEN << "Grade 0:" << RESET << std::endl;
	try
	{
		Bureaucrat official2("bastard", 0);
		std::cout << official2;
	}
	catch (std::exception &ex)
	{
		std::cout <<CYAN << ex.what() << RESET << std::endl;
	}

	std::cout << MAGENTA << "===== Increment and decrement =====" << RESET << std::endl;

	Bureaucrat mayor("mayor", 75);
	std::cout << mayor;
	try
	{
		for (int i = 0; i < 100; i++)
			mayor.decrementGrade();
	}
	catch (std::exception &ex)
	{
		std::cout <<CYAN << ex.what() << RESET << std::endl;
	}
	std::cout << mayor;
	try
	{
		for (int i = 0; i < 150; i++)
			mayor.incrementGrade();
	}
	catch (std::exception &ex)
	{
		std::cout <<CYAN << ex.what() << RESET << std::endl;
	}
	std::cout << mayor;

}

void test_01()
{

}

int		main(void)
{
	std::cout << CYAN << "******************* EX00 *******************" << RESET << std::endl;
	test_00();
	std::cout << std::endl;
	std::cout << CYAN << "******************* EX00 *******************" << RESET << std::endl;
	std::cout << std::endl;
	test_01();
	std::cout << std::endl;
	return (0);
}
