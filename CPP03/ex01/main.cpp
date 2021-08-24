#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Claque("Trapos");
	Claque.attack("Bob");
	Claque.takeDamage(5);
	Claque.beRepaired(1000);

	return 0;
}
