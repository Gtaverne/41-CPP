#include <iostream>
#include "annuaire.class.hpp"

int main ()
{
	phonebook 		annuaire;
	std::string		buf;

	while (std::getline(std::cin, buf))
	{
		if (buf == "EXIT")
			break ;
		else
			annuaire.bigloop(buf);
	}
	return (0);
}
