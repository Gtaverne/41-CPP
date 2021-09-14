#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	std::cout << std::endl << "Simple creations" << std::endl;

	ShrubberyCreationForm shroub("noel");
	PresidentialPardonForm excuseMaurice("Maurice");

	Bureaucrat bob("Bob", 50);
	Bureaucrat noob("Sbire", 147);
	Bureaucrat god("God", 1);

	{
		std::cout << std::endl << "Simple executions" << std::endl;
		try
		{
			//We test both execute and executeForm
			shroub.beSigned(god);
			shroub.execute(bob);

			ShrubberyCreationForm encorenoel("encorenoel");
			god.signForm(&encorenoel);
			bob.executeForm(encorenoel);
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
		std::cout << std::endl << "Insufficient level" << std::endl;
		try
		{
			excuseMaurice.beSigned(god);
			excuseMaurice.execute(noob);
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
		std::cout << std::endl << "Unsigned form" << std::endl;
		try
		{
			shroub.execute(noob);
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
		std::cout << std::endl << "Another unsigned form" << std::endl;
		try
		{
			noob.executeForm(shroub);
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
}
