#include "Convert.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of argument. Example ./convert 42.42f" << std::endl;
		return (1);
	}
	
	Convert val(av[1]);
	std::cout << val << std::endl;
	
	return (0);
}
