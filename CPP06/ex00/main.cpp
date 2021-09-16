#include "Convert.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of argument. Example ./convert 42.42f" << std::endl;
		return (1);
	}
	
	Convert val(av[1]);

	std::cout << "char: ";
	try
	{
		std::cout << val.charConv() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "int: ";
	try
	{
		std::cout << val.intConv() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "float: ";
	try
	{
		std::cout << std::fixed << std::setprecision(1) << val.floatConv() << 'f' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "double: ";
	try
	{
		std::cout << std::fixed << std::setprecision(1) << val.doubleConv() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}