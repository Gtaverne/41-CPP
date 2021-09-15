#include "Intern.hpp"

//Canon
Intern::Intern()
{
	std::cout << "A nameless intern been created" << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << "An intern has been created by copy" << std::endl;
	*this = src;
}

Intern & Intern::operator=(Intern const & rhs) 
{
	(void)rhs;
	return *this;
}

Intern::~Intern()
{
}

//Lists and values
Form *Intern::newPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::newShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::newRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form* (*Intern::_functionList[3])(std::string const &target) = {
newPresidentialPardonForm,
newRobotomyRequestForm,
newShrubberyCreationForm};

//Getters and setters


//Class functions
Form * Intern::makeForm (std::string const formname, std::string const target)
{
	std::string list[3] = {"presidential pardon",
	"robotomy request",
	"shrubbery creation"};

	int index = 0;
	while (index < 3)
	{
		if (list[index] == formname)
			break;
		index++;
	}
	if (index < 0 || index > 2)
	{
		std::cout << formname << " is not a valid form name" << std::endl <<
		"try one of the following:" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "  - " << list[i] << std::endl;
		}
		return NULL;
	}
	std::cout << "Intern creates a form: " ;
	return (_functionList[index](target));
}


//Environment functions

std::ostream & operator<<(std::ostream & o, Intern const & rhs)
{
	(void)rhs;
	std::cout << "Nameless Intern";
	return o;
}
