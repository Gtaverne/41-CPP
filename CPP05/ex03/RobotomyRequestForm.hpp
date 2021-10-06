#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <ctime>
# include <stdlib.h>
# include <time.h>

class RobotomyRequestForm : public Form
{
public:
//Canon
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm(std::string name);

//Getters and setters
	const std::string getTarget(void) const;


//Class functions
	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;

};

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & rhs);

#endif
