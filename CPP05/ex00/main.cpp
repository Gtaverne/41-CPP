#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bob("Bob", 5);
	try
	{
		Bureaucrat Luc("Luc", 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat Maurice("Luc", 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
	