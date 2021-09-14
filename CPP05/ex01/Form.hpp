#ifndef Form_HPP
# define Form_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
//Exceptions
	class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade is too high! No grade can be below 1");
			}
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade is too low! No grade can be above 150");
			}
	};
	

//Canon
	Form();
	Form(Form const & src);
	Form & operator=(Form const & rhs);
	virtual ~Form();

	Form(std::string name, int signGrade, int execGrade);

//Getters and setters
	const std::string getName(void) const;
	int getsignGrade(void) const;
	int getexecGrade(void) const;
	bool isSigned(void) const;


//Class functions
	void beSigned(Bureaucrat bob);

private:
	std::string const _formName;
	int const _signGrade;
	int const _execGrade;
	bool _signed;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);


#endif
