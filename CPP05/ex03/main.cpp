#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{
	std::cout << std::endl << "Simple creations" << std::endl;

	Bureaucrat bob("Bob", 50);
	Bureaucrat noob("Sbire", 147);
	Bureaucrat god("God", 1);
	Intern benj;
	Form *internproduction;

	
	{
		std::cout << std::endl << "TEST: Creation of a form by an intern" << std::endl;
		try
		{
			internproduction = benj.makeForm("presidential pardon", "Lulu");
			god.signForm(internproduction);
			god.executeForm(*internproduction);
		}
		catch (Form::GradeTooLowException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (Form::UnsignedFormException & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "TEST: Invalid form name" << std::endl;
		try
		{
			internproduction = benj.makeForm("Atchoum", "Lulu");
		}
		catch (Form::GradeTooLowException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (Form::UnsignedFormException & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "TEST: The one from the subject" << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
