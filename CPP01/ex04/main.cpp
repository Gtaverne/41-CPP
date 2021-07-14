#include "mkay.hpp"

int main (int ac, char **av)
{
	if (ac != 4 || !av[2][0] || !av[3][0])
	{
		std::cout << "Wrong arguments" << std::endl << "Enter non empty arguments FILENAME STR1 STR2" << std::endl;
		return (1);
	}
	wellsed sed(av[1], av[2], av[3]);

	
}