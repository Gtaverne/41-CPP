#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Claque("Serena");
	Claque.attack("Bob");
	Claque.takeDamage(5);
	Claque.beRepaired(1000);

	return 0;
}
