#include "RobotomyRequestForm.hpp"

//Canon
RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45), _target("No target")
{
	std::cout << "A default RobotomyRequestForm has been created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src._target)
{
	std::cout << this->getName() << " has been created by copy of " << src << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) 
{
	std::cout << "Assignation of a RobotomyRequestForm is called, it will modify non const values" << std::endl;
	this->setSign(rhs.isSigned());
	this->_target = rhs.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "A RobotomyRequestForm has been created, its target is: " << target << std::endl;
}

//Getters and setters
const std::string RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

//Class functions
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(static_cast<int>(time(0)));
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
		std::cout << "DRRRRRRRRRRR! DJIIIIIIII! CRRAC.....  " << std::endl;
		int flip = rand() % 2;
		if (flip == 0)
		{
			std::cout << this->getTarget() << " has been successfully robotomized." << std::endl;
		}
		else
		{
			std::cout << this->getTarget() << " died in the complicated procedure." << std::endl;
		}
	}
}


//Environment functions

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & rhs)
{
	std::cout << rhs.getName() << ", target: " << rhs.getTarget() << ", sign grade " << rhs.getsignGrade() << ", exec grade " << rhs.getexecGrade() << (rhs.isSigned() ? ", (signed)" : ", (unsigned)");
	return o;
}
