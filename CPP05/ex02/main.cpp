#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	std::cout << std::endl << "Simple creations" << std::endl;
	ShrubberyCreationForm shroub("pomme");

	Bureaucrat bob("Bob", 50);
	Bureaucrat noob("Sbire", 145);
	Bureaucrat god("God", 1);

	{
		std::cout << std::endl << "Simple executions" << std::endl;
		try
		{
			shroub.beSigned(god);
			shroub.execute(bob);
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
			shroub.beSigned(god);
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
}
