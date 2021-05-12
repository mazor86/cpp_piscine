#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
public:
	Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &copy);
	~Form();
	Form &operator=(const Form &copy);

	void beSigned(Bureaucrat &);

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
private:
	std::string const	_name;
	int const			_gradeToSign;
	int const			_gradeToExecute;
	bool				_isSigned;

	Form();
	void _checkGrade(int grade);
};

std::ostream &operator<<(std::ostream & ofs, const Form &obj);
#endif
