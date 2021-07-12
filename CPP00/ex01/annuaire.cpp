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
		std::cout << "Write ADD, EXIT or SEARCH" << std::endl;
		std::getline(std::cin, buf);
		if (buf == "EXIT")
		{
			std::cout << "We had some fun, time to clean and close" << std::endl;
			loop = 0;
		}
		else if (buf == "ADD")
		{
			while (i < 0 || i > 7)
			{
				std::cout << "The list is full, overwrite a contact :" << std::endl;
				for (int k=0; k < i; k++)
				{
					std::cout << k << " : " << annuaire[k].getvalue(1) << std::endl;
				}
				int k = 0;
				std::cin >> k;
				if (k > 0 && k <= 7)
				{
					std::string dummy;
					std::getline(std::cin, dummy);
					annuaire[k].addcontact(k);
					break ;
				}
				i = 8;
			}
			if (i < 8)
				i = annuaire[i].addcontact(i);
		}
		else if (buf == "SEARCH")
		{
			int index = -1;
			std::string saisie;
			while (index < 0 || index > i)
			{
				display (annuaire);
				std::cout << "Write the index of the contact you want to check" << std::endl;
				std::cin >> saisie;
				if (saisie.empty() || (index = saisie[0] - '0') < 0 || index >= i || saisie[1] != 0)
				{	
					std::cout << "Incoherent index" << std::endl;
					index = -1;
				}
				else
					annuaire[index].fullcontact();			
			}
		}
	}
	return (0);
}