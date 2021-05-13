#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern	&Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

Form *Intern::makeForm(const std::string &type, const std::string &target)
{
	Form* temp;
	std::string const _formTypes[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	_method[0] = &Intern::_RobotForm;
	_method[1] = &Intern::_PresidentForm;
	_method[2] = &Intern::_ShrubberyForm;

	for (int i = 0; i < 3; i++)
	{
		if (type == _formTypes[i])
		{
			temp = (this->*_method[i])(target);
			std::cout << "Intern creates \"" << temp->getName() << "\"" << std::endl;
			return (this->*_method[i])(target);
		}
	}
	throw NotFormException();
}

Form *Intern::_RobotForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::_PresidentForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::_ShrubberyForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

const char *Intern::NotFormException::what() const throw()
{
	return ("Cannot make this form");
}
