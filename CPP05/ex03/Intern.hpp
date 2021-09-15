#ifndef Intern_HPP
# define Intern_HPP

# include <iostream>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
public:
//Canon
	Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & rhs);
	virtual ~Intern();

//Getters and setters


//Class functions
	Form * makeForm (std::string const formname, std::string const target);
	
private:
	static Form *newPresidentialPardonForm(std::string const &target);
	static Form *newRobotomyRequestForm(std::string const &target);
	static Form *newShrubberyCreationForm(std::string const &target);
	static Form* (* _functionList[3])(std::string const &target);
};

std::ostream & operator<<(std::ostream & o, Intern const & rhs);

#endif
