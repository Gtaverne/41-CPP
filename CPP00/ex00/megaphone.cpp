#include <iostream>

int main (int ac, char **av )
{
	if (ac <=  1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (int i = 1; i < ac; i++)
	{
		int j = 0;
		while (av[i][j])
		{
			std::cout << (char)(std::toupper(av[i][j]));
			j++;
		}
		if (i != ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
