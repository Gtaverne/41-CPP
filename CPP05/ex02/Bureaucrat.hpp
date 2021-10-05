#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
//Exceptions
	class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade is too high! No rank can be below 1");
			}
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade is too low! No rank can be above 150");
			}
	};

//Canon
	Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & rhs);
	virtual ~Bureaucrat();

	Bureaucrat(std::string name, int rank);
	Bureaucrat(int rank);
	Bureaucrat(std::string name);

//Getters and setters
	const std::string getName(void) const;
	int getGrade(void) const;
	void gradePromotion(void);
	void gradeSanction(void);


//Class functions
	void signForm(Form &tosign);
	void executeForm (Form const & form);
	
private:
	std::string const _name;
	int _rank;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
