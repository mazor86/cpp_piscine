#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "AForm.hpp"

# define PRES_SIGN 25
# define PRES_EXEC 5

class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

	const std::string &getTarget() const;

	virtual void doAction() const;

private:
	std::string const _target;

	PresidentialPardonForm();
};

#endif
