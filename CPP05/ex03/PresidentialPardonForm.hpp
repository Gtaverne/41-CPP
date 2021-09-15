#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
//Canon
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm(std::string name);

//Getters and setters
	const std::string getTarget(void) const;


//Class functions
	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;

};

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & rhs);

#endif
