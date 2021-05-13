#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
		: AForm("Shruberry Form", SHRU_SIGN, SHRU_EXEC), _target("target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
		: AForm("Shruberry Form", SHRU_SIGN, SHRU_EXEC), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
		: AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), _target(copy.getTarget())
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	AForm::operator=(copy);
	return (*this);
}

void ShrubberyCreationForm::doAction() const
{
	std::string filename = this->getTarget() + "_shrubbery";
	std::ofstream ofs;
	try
	{
		ofs.open(filename);
		ofs << "                \\/ |    |/" << std::endl;
		ofs << "        \\/ / \\||/  /_/___/_" << std::endl;
		ofs << "        \\/   |/ \\/" << std::endl;
		ofs << "    _\\__\\_\\   |  /_____/_" << std::endl;
		ofs << "        \\  | /          /" << std::endl;
		ofs << "__ _-----`  |{,-----------~" << std::endl;
		ofs << "            \\ }{" << std::endl;
		ofs << "            }{{" << std::endl;
		ofs << "            }}{" << std::endl;
		ofs << "            {{}" << std::endl;
		ofs << "    , -=-~{ .-^- _" << std::endl;
		ofs << "            `}" << std::endl;
		ofs << "            {" << std::endl;
		ofs.close();
	}
	catch (std::exception &e)
	{
		std::cout << "Some trouble occured with file \"" << filename << "\"" << std::endl;
	}
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return _target;
}
