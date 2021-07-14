#include "mkay.hpp"


wellsed::wellsed(std::string input, std::string o, std::string n): _input(input), _src(o), _rep(n)
{
	_output = input + ".replace";
}



std::ifstream input;
	input.open(av[1]);
	if (!input.is_open())
	{
		std::cout << "Error: could not open \"" << av[1] << "\"" << std::endl;
		return (1);
	}
