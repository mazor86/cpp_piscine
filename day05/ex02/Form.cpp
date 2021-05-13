#include "Form.hpp"

Form::Form()
		: _name("AForm"),
		  _gradeToSign(150),
		  _gradeToExecute(150),
		  _isSigned(false)
{
}
Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute)
	: _name(name),
	  _gradeToSign(gradeToSign),
	  _gradeToExecute(gradeToExecute),
	  _isSigned(false)
{
}

Form::~Form()
{
}

Form::Form(const Form &copy)
	   :_name(copy.getName()),
		_gradeToSign(copy.getGradeToSign()),
		_gradeToExecute(copy.getGradeToExecute()),
		_isSigned(false)
{
	_checkGrade(_gradeToExecute);
	_checkGrade(_gradeToSign);
	*this = copy;
}

Form	&Form::operator=(const Form &copy)
{
	_checkGrade(copy._gradeToExecute);
	_checkGrade(copy._gradeToSign);
	this->_isSigned = copy._isSigned;
	return (*this);
}

const std::string &Form::getName() const
{
	return _name;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

void Form::beSigned(Bureaucrat & obj)
{
	if (_isSigned)
		throw Form::AlreadySignedException();
	if (obj.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

void Form::_checkGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!_isSigned)
		throw Form::IsNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
		this->doAction();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("ERROR! The grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("ERROR! The grade is too low");
}

const char *Form::AlreadySignedException::what() const throw()
{
	return ("ERROR. Form is already signed");
}

const char *Form::IsNotSignedException::what() const throw()
{
	return ("ERROR. Form is not signed");
}

std::ostream &operator<<(std::ostream &ofs, const Form &obj)
{
	ofs << "It's the form: " << obj.getName() << std::endl;
	ofs << "Is signed: " << obj.getIsSigned() << std::endl;
	ofs << "Grade to sign: " << obj.getGradeToSign() << std::endl;
	ofs << "Grade to execute: " << obj.getGradeToExecute() << std::endl;
	return ofs;
}
