#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("presidential pardon", PRES_SIGN, PRES_EXEC), _target("Target")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
		: Form("presidential pardon", PRES_SIGN, PRES_EXEC), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
		: Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), _target(copy.getTarget())
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	Form::operator=(copy);
	return (*this);
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return _target;
}

void PresidentialPardonForm::doAction() const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
