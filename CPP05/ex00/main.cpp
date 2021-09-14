#include "Bureaucrat.hpp"

void dummy(void)
{
	Bureaucrat arsene("Arsene", 3);
	std::cout << "We give him a couple promotions" << std::endl;
	arsene.gradePromotion();
	std::cout << arsene << " has been promoted" << std::endl;
	arsene.gradePromotion();
	std::cout << arsene << " has been promoted" << std::endl;
	arsene.gradePromotion();
	std::cout << arsene << " has been promoted" << std::endl;
	arsene.gradePromotion();
	std::cout << arsene << " has been promoted" << std::endl;
}

int main()
{
	std::cout << std::endl << "Simple creations" << std::endl;
	{
		Bureaucrat Andre;
		Bureaucrat Basile("Basile");
		Bureaucrat Camille(140);
		Bureaucrat Dede("Dede", 85);
		std::cout << "Name printings" << std::endl;
		std::cout << Andre << std::endl;
		std::cout << Basile << std::endl;
		std::cout << Camille << std::endl;
		std::cout << Dede << std::endl;
	}

	std::cout << std::endl << "Creation of someone too low" << std::endl;
	try
	{
		Bureaucrat Luc("Luc", 155);
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creation of someone too high" << std::endl;
	try
	{
		Bureaucrat Maurice("Maurice", -25);
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Sanctions of someone until we go too low" << std::endl;
	try
	{
		Bureaucrat Gerard("Gerard", 149);
		std::cout << "We give him a couple sanctions" << std::endl;
		Gerard.gradeSanction();
		std::cout << Gerard << " has been sanctioned" << std::endl;
		Gerard.gradeSanction();
		std::cout << Gerard << " has been sanctioned" << std::endl;
		Gerard.gradeSanction();
		std::cout << Gerard << " has been sanctioned" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Promotions of someone until we go too high" << std::endl;
	try
	{
		dummy();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
}
