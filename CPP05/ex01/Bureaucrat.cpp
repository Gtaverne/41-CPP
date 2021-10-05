#include "Bureaucrat.hpp"

//Canon
Bureaucrat::Bureaucrat() : _name("Nameless dude"), 	_rank(150)
{
	std::cout << "A nameless dude with the lowest possible rank has been created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _rank(src.getGrade())
{
	std::cout << _name << " has been created by copy, with grade " << _rank << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) 
{
	std::cout << this->getName() << " has been assigned the same grade as " << rhs.getName() << std::endl;
	_rank = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int rank) : _name(name), _rank(rank)
{
	std::cout << _name << " has been created, with grade " << _rank << std::endl;
	if (_rank < 0)
		throw Bureaucrat::GradeTooHighException();
	if (_rank >150)
		throw Bureaucrat::GradeTooLowException();	
}

Bureaucrat::Bureaucrat(int rank) : _name("Nameless dude"), _rank(rank)
{
	std::cout << "A nameless dude with the rank " << rank << " has been created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _rank(150)
{
	std::cout << name << " with the lowest possible rank has been created" << std::endl;
}

//Getters and setters
const std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_rank);
}

void Bureaucrat::gradePromotion(void)
{
	if (_rank > 1)
		_rank--;
	else
		throw Bureaucrat::GradeTooHighException();	
}

void Bureaucrat::gradeSanction(void)
{
	if (_rank < 150)
		_rank++;
	else
		throw Bureaucrat::GradeTooLowException();	
}

//Class functions
void Bureaucrat::signForm(Form &tosign)
{
	if (this->getGrade() <= tosign.getsignGrade())
	{
		std::cout << this->getName() << " signs " << tosign.getName() << std::endl;
		tosign.setSign(1);
	}
	else
	{
		std::cout << this->getName() << " cannot sign " << tosign << " because his grade is too low" << std::endl;
	}
}

//Environment functions

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	std::cout << rhs.getName() << ", grade " << rhs.getGrade();
	return o;
}
