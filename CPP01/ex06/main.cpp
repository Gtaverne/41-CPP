#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen TheKaren;

	if (ac != 2)
	{
		std::cout << "[ This Karen says too few or too many things ]" <<std::endl;
		return 0 ;
	}

	const char *possibilities[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int res = 5;
	for (int i = 0; i < 4; i++)
	{
		if ((std::string)av[1] == (std::string)possibilities[i])
			res = i;
	}

	std::cout << std::endl;
	switch (res)
	{
	case 0:
		TheKaren.complain("DEBUG");
		break;
	case 1:
		TheKaren.complain("INFO");
		break;
	case 2:
		TheKaren.complain("WARNING");
		break;
	case 3:
		TheKaren.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
		break;
	}
	std::cout << std::endl;
	return 0;
}
