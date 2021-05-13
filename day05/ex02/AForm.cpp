#include "AForm.hpp"

AForm::AForm()
		: _name("AForm"),
		  _gradeToSign(150),
		  _gradeToExecute(150),
		  _isSigned(false)
{
}
AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute)
	: _name(name),
	  _gradeToSign(gradeToSign),
	  _gradeToExecute(gradeToExecute),
	  _isSigned(false)
{
}

AForm::~AForm()
{
}

AForm::AForm(const AForm &copy)
	   :_name(copy.getName()),
		_gradeToSign(copy.getGradeToSign()),
		_gradeToExecute(copy.getGradeToExecute()),
		_isSigned(false)
{
	_checkGrade(_gradeToExecute);
	_checkGrade(_gradeToSign);
	*this = copy;
}

AForm	&AForm::operator=(const AForm &copy)
{
	_checkGrade(copy._gradeToExecute);
	_checkGrade(copy._gradeToSign);
	this->_isSigned = copy._isSigned;
	return (*this);
}

const std::string &AForm::getName() const
{
	return _name;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

bool AForm::getIsSigned() const
{
	return _isSigned;
}

void AForm::beSigned(Bureaucrat & obj)
{
	if (_isSigned)
		throw AForm::AlreadySignedException();
	if (obj.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::_checkGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	if (grade > 150)
		throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!_isSigned)
		throw AForm::IsNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		this->doAction();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("ERROR! The grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("ERROR! The grade is too low");
}

const char *AForm::AlreadySignedException::what() const throw()
{
	return ("ERROR. Form is already signed");
}

const char *AForm::IsNotSignedException::what() const throw()
{
	return ("ERROR. Form is not signed");
}

std::ostream &operator<<(std::ostream &ofs, const AForm &obj)
{
	ofs << "It's the form: " << obj.getName() << std::endl;
	ofs << "Is signed: " << obj.getIsSigned() << std::endl;
	ofs << "Grade to sign: " << obj.getGradeToSign() << std::endl;
	ofs << "Grade to execute: " << obj.getGradeToExecute() << std::endl;
	return ofs;
}
