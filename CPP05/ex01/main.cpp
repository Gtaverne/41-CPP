#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << std::endl << "Simple creations" << std::endl;
	Form a;
	Form b("Order 66", 5, 50);
	a = b;

	Bureaucrat bob("Bob", 10);
	Bureaucrat god("God", 1);

	{
		std::cout << std::endl << "Creation of invalid form" << std::endl;
		try
		{
			Form b("Absurdform", 5005, 50);
		}
		catch (Form::GradeTooLowException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException & e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	{
		std::cout << std::endl << "A low rank tries to sign something big" << std::endl;
		try
		{
			b.beSigned(bob);
			std::cout << b << std::endl;
		}
		catch (Form::GradeTooLowException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException & e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "God tries to sign something, he should have no problem" << std::endl;
		try
		{
			b.beSigned(god);
			std::cout << b << std::endl;
		}
		catch (Form::GradeTooLowException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException & e) {
			std::cout << e.what() << std::endl;
		}
	}
}
