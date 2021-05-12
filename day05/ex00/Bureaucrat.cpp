#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	_checkGrade(_grade);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "COPY" << std::endl;
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "ASSIGNATION" << std::endl;

	this->_grade = copy.getGrade();
	_checkGrade(_grade);
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	_checkGrade((_grade - 1));
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	_checkGrade(_grade + 1);
	this->_grade++;
}

void Bureaucrat::_checkGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR!!! The highest grade is 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("ERROR!!! The lowest grade is 150");
}

std::ostream &operator<<(std::ostream &ofs, const Bureaucrat &obj)
{
	std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return ofs;
}

