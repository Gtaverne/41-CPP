#include "Bureaucrat.hpp"

//Canon
Bureaucrat::Bureaucrat() : _name("Nameless dude"), 	_rank(150)
{
	std::cout << "A nameless dude with the lowest possible rank has been created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _rank(src.getGrade())
{
	std::cout << _name << "has been created by copy, with grade " << _rank << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	//_name = rhs.getName();
	_rank = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
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
	_rank++;
}

void Bureaucrat::gradeSanction(void)
{
	_rank--;
}

