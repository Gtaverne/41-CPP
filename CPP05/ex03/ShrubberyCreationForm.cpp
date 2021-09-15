#include "ShrubberyCreationForm.hpp"

//Canon
ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137), _target("No target")
{
	std::cout << "A default ShrubberyCreationForm has been created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src), _target(src._target)
{
	std::cout << this->getName() << " has been created by copy of " << src << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) 
{
	std::cout << "Assignation of a ShrubberyCreationForm is called, it will modify non const values" << std::endl;
	this->setSign(rhs.isSigned());
	this->_target = rhs.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target)
{
	std::cout << "A ShrubberyCreationForm has been created, its target is: " << target << std::endl;
}

//Getters and setters
const std::string ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

//Class functions
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string output;
	std::ofstream writer;

	if (executor.getGrade() > this->getexecGrade())
	{
		throw Form::GradeTooLowException();
	}
	else if (!this->isSigned())
	{
		throw Form::UnsignedFormException();
	}
	else
	{
		std::cout << "We print a tree" << std::endl;
		output = this->getTarget() + "_shrubbery";
		writer.open(output.c_str());
		writer << \
		"      /\\      " << std::endl << \
		"     /\\*\\     " << std::endl << \
		"    /\\O\\*\\    " << std::endl << \
		"   /*/\\/\\/\\   " << std::endl << \
		"  /\\O\\/\\*\\/\\  " << std::endl << \
		" /\\*\\/\\*\\/\\/\\ " << std::endl << \
		"/\\O\\/\\/*/\\/O/\\" << std::endl << \
		"      ||      " << std::endl << \
		"      ||      " << std::endl << \
		"      ||      " << std::endl;
		writer.close();
	}
}


//Environment functions

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
{
	std::cout << rhs.getName() << ", target: " << rhs.getTarget() << ", sign grade " << rhs.getsignGrade() << ", exec grade " << rhs.getexecGrade() << (rhs.isSigned() ? ", (signed)" : ", (unsigned)");
	return o;
}
