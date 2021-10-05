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
				return ("The grade is too high!");
			}
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade is too low!");
			}
	};

	class UnsignedFormException: public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return ("The form has not been signed. Find someone to do it");
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
	void setSign(bool const signature);


//Class functions
	void beSigned(Bureaucrat &bob);
	virtual void execute (Bureaucrat const & executor) const = 0;

private:
	std::string const _formName;
	int const _signGrade;
	int const _execGrade;
	bool _signed;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);


#endif
