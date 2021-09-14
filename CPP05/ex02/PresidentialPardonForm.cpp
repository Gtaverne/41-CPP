#include "PresidentialPardonForm.hpp"

//Canon
PresidentialPardonForm::PresidentialPardonForm() : Form("Shrubbery Creation Form", 25, 5), _target("No target")
{
	std::cout << "A default PresidentialPardonForm has been created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src), _target(src._target)
{
	std::cout << this->getName() << " has been created by copy of " << src << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) 
{
	std::cout << "Assignation of a PresidentialPardonForm is called, it will modify non const values" << std::endl;
	this->setSign(rhs.isSigned());
	this->_target = rhs.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Shrubbery Creation Form", 25, 5), _target(target)
{
	std::cout << "A PresidentialPardonForm has been created, its target is: " << target << std::endl;
}

//Getters and setters
const std::string PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}

//Class functions
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
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
		std::cout << "ATTENTION! ATTENTION! " << this->getTarget() << " has been pardonned by Zafod Beeblebrox." << std::endl;
		
	}
}


//Environment functions

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & rhs)
{
	std::cout << rhs.getName() << ", target: " << rhs.getTarget() << ", sign grade " << rhs.getsignGrade() << ", exec grade " << rhs.getexecGrade() << (rhs.isSigned() ? ", (signed)" : ", (unsigned)");
	return o;
}
