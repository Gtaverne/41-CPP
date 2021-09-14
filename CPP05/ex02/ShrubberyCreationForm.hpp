#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
//Canon
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm(std::string name);

//Getters and setters
	const std::string getTarget(void) const;


//Class functions
	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;

};

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs);

#endif
