#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <iostream>

# define ROBOT_SIGN 72
# define ROBOT_EXEC 45

class RobotomyRequestForm: public AForm
{
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

	virtual void doAction() const;

	const std::string &getTarget() const;

private:
	std::string const _target;

	RobotomyRequestForm();
};

#endif
