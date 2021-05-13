#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
class Intern
{
public:
	Intern();
	Intern(const Intern &copy);
	~Intern();
	Intern &operator=(const Intern &copy);

	Form* makeForm(std::string const &type, std::string const &target);
private:

	Form* (Intern::*_method[3])(std::string const &target);
	Form *_RobotForm(std::string const &target);
	Form *_PresidentForm(std::string const &target);
	Form *_ShrubberyForm(std::string const &target);

	class NotFormException: public std::exception
	{
		const char * what() const throw();
	};
};

#endif

