#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
		: Form("robotomy request", ROBOT_SIGN, ROBOT_EXEC), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request", ROBOT_SIGN, ROBOT_EXEC), _target("Franki")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
		: Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), _target(copy.getTarget())
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	Form::operator=(copy);
	return (*this);
}

void RobotomyRequestForm::doAction() const
{
	std::cout << "BZZZZZZZ...TR-TR-TR-TR-TR" << std::endl;
	std::cout << "...WIIIIIIIIIIIIIIIIIIIIIII" << std::endl;
	int rnd = rand() % 2;

	if (rnd)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " robotomization failed" << std::endl;
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return _target;
}
