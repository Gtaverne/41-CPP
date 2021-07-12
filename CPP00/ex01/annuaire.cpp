#include <iostream>
#include "annuaire.class.hpp"

int main ()
{
	member annuaire[8];
	int loop = 1;
	std::string		buf;
	int i = 0;

	while (loop)
	{
		std::cout << "Ecrivez ADD, EXIT ou SEARCH" << std::endl;
		std::cin >> buf;
		if (buf == "EXIT")
			loop = 0;
		else if (buf == "ADD")
		{
			if (i == 7)
			{
				std::cout << "The list is full, select an element to delete :" << std::endl;
				for (int k=0; k <= i; k++)
				{
					std::cout << k << " : " << annuaire[k].getvalue(k) << std::endl;

				}
			}
			else
				i = annuaire[i].addcontact(i);
		}
		else if (buf == "SEARCH")
		{
			i = annuaire[i].addcontact(i);
		}
	}
	return (0);
}