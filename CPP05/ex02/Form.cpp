#include "Form.hpp"

//Canon
Form::Form() : _formName("Nameless form"), 	_signGrade(150), _execGrade(150), _signed(0)
{
	std::cout << "A nameless, unsigned, form with the lowest possible ranks has been created" << std::endl;
}

Form::Form(Form const & src) : _formName(src.getName()), _signGrade(src.getsignGrade()), _execGrade(src.getexecGrade()), _signed(src.isSigned())
{
	std::cout << _formName << " has been created by copy of " << src << std::endl;
}

Form & Form::operator=(Form const & rhs) 
{
	this->_signed = rhs.isSigned();
	std::cout << "Assignation of a form is called, it will modify non const values" << std::endl;
	return (*this);
}

Form::~Form()
{

}

Form::Form(std::string name, int signGrade, int execGrade) : _formName(name), _signGrade(signGrade), _execGrade(execGrade), _signed(0)
{
	std::cout << "Creation of a new form: " << *this << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150|| _execGrade > 150)
		throw Form::GradeTooLowException();	
}

//Getters and setters
const std::string Form::getName(void) const
{
	return (_formName);
}

int Form::getexecGrade(void) const
{
	return (_execGrade);
}

int Form::getsignGrade(void) const
{
	return (_signGrade);
}

bool Form::isSigned(void) const
{
	return(_signed);
}

void Form::setSign(bool const signature)
{
	this->_signed = signature;
}


//Class functions
void Form::beSigned(Bureaucrat bob)
{
	if (bob.getGrade() <= this->getsignGrade())
	{
		std::cout << bob.getName() << " signs " << this->getName() << std::endl;
		this->_signed = 1;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

//Environment functions

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	std::cout << rhs.getName() << ", sign grade " << rhs.getsignGrade() << ", exec grade " << rhs.getexecGrade() << (rhs.isSigned() ? ", (signed)" : ", (unsigned)");
	return o;
}
