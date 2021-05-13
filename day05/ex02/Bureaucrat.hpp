#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
class AForm;
# include "AForm.hpp"

class Bureaucrat
{
public:
	Bureaucrat(const std::string &name, int grade);

	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &copy);

	void incrementGrade();
	void decrementGrade();
	void signForm(AForm & form);
	void executeForm(AForm const & form);

	const std::string &getName() const;
	int getGrade() const;

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

private:
	Bureaucrat();
	std::string const _name;
	int _grade;

	void _checkGrade(int grade);
};

std::ostream &operator<<(std::ostream & ofs, const Bureaucrat &obj);
#endif
