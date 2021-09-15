#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
	std::cout << std::endl << "TEST: Simple creations" << std::endl;

	ShrubberyCreationForm shroub("noel");
	PresidentialPardonForm excuseMaurice("Maurice");
	RobotomyRequestForm roboto("Arsene");

	Bureaucrat bob("Bob", 50);
	Bureaucrat noob("Sbire", 147);
	Bureaucrat god("God", 1);

	{
		std::cout << std::endl << "TEST: Simple executions" << std::endl;
		try
		{
			//We test both execute and executeForm
			shroub.beSigned(god);
			shroub.execute(bob);
			bob.signForm(&roboto);
			god.executeForm(roboto);

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
	std::cout << ""<< roboto << std::endl;


	{
		std::cout << std::endl << "TEST: Insufficient level" << std::endl;
		try
		{
			excuseMaurice.beSigned(god);
			std::cout << noob << " tries to execute" << std::endl;
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
		std::cout << std::endl << "TEST: Unsigned form" << std::endl;
		try
		{
			PresidentialPardonForm banana("banana");
			banana.execute(god);
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
		std::cout << std::endl << "TEST: Another unsigned form" << std::endl;
		try
		{
			PresidentialPardonForm banana("banana");
			god.executeForm(banana);
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
