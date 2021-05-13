#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

# define SHRU_SIGN 145
# define SHRU_EXEC 137

class ShrubberyCreationForm: public AForm
{
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

	virtual void doAction() const;

	const std::string &getTarget() const;
private:
	std::string const _target;
	ShrubberyCreationForm();
};

#endif
