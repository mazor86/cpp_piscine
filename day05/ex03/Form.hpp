#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <string>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
public:
	Form();
	Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &copy);
	virtual ~Form();
	Form &operator=(const Form &copy);

	void beSigned(Bureaucrat &);
	void execute(Bureaucrat const & executor) const;
	virtual void doAction() const = 0;

	const std::string &getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool getIsSigned() const;

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

	class AlreadySignedException: public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

	class IsNotSignedException: public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

private:
	std::string const	_name;
	int const			_gradeToSign;
	int const			_gradeToExecute;
	bool				_isSigned;

	void _checkGrade(int grade);
};

std::ostream &operator<<(std::ostream & ofs, const Form &obj);
#endif
