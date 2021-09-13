#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
//# include <stdexcept>


class Bureaucrat
{
public:
//Exceptions
	class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade is too high! it cannot be less than 1");
			}
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade is too low! It must be above 150");
			}
	};

//Canon
	Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & rhs);
	virtual ~Bureaucrat();

	Bureaucrat(std::string name, int rank);

//Getters and setters
	const std::string getName(void) const;
	int getGrade(void) const;
	void gradePromotion(void);
	void gradeSanction(void);


//Class functions
private:
	std::string const _name;
	int _rank;

};

#endif
