#include "Bureaucrat.hpp"
#include "Form.hpp"
#define RESET		"\x1B[0m"
#define GREEN		"\x1B[32m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

void test_01()
{
	std::cout << MAGENTA << "===== Constructors =====" << RESET << std::endl;
	std::cout << GREEN << "Normal:" << RESET << std::endl;
	try
	{
		Form form1("2NDFL", 150, 150);
		std::cout << form1;
	}
	catch (std::exception &ex)
	{
		std::cout <<CYAN << ex.what() << RESET << std::endl;
	}

	std::cout << GREEN << "Grade 151:" << std::endl;
	try
	{
		Form form2("form", 151 , 50);
		std::cout << form2;
	}
	catch (std::exception &ex)
	{
		std::cout <<CYAN << ex.what() << RESET << std::endl;
	}

	std::cout << GREEN << "Grade 0:" << std::endl;
	try
	{
		Form form2("form", 75 , 0);
		std::cout << form2;
	}
	catch (std::exception &ex)
	{
		std::cout <<CYAN << ex.what() << RESET << std::endl;
	}
	std::cout << std::endl;
	std::cout << MAGENTA << "===== Signing forms =====" << RESET << std::endl;
	Bureaucrat bure("bureaucrat", 75);
	Form form3("\"Form_can_be_signed\"", 100, 100);
	Form form4("\"Form_cannot_be_signed\"", 1, 1);
	std::cout << bure << std::endl;
	std::cout << form3 << std::endl;
	std::cout << form4 << std::endl;
	bure.signForm(form3);
	std::cout << std::endl;
	bure.signForm(form4);
	std::cout << std::endl;
	bure.signForm(form3);
}

int		main(void)
{
	std::cout << std::endl;
	std::cout << CYAN << "******************* EX01 *******************" << RESET << std::endl;
	std::cout << std::endl;
	test_01();
	std::cout << std::endl;
	return (0);
}
