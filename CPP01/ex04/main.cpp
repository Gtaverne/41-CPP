#include "mkay.hpp"

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong arguments" << std::endl << "Enter arguments FILENAME STR1 STR2" << std::endl;
		return (1);
	}
	Wellsed sed(av[1], av[2], av[3]);
	if (sed.test())
	{
		sed.rockit();
	}

}