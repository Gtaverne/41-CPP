#include "Convert.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of argument. Example ./convert 42.42f" << std::endl;
		return (1);
	}
	
	//Uncomment to display the ASCII table
	// for (int i = 0; i < 1000; i++)
	// {
	// 	std::cout << (std::isprint(static_cast<char>(i)) ?  static_cast<char>(i) : ' ') << " " << (i % 20 == 0 ? "\n" : "");
	// }
	// std::cout << std::endl;

	Convert val(av[1]);
	std::cout << val << std::endl;
	
	return (0);
}
