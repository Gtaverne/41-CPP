#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "Ici on cree un ScavTrap" << std::endl;
	ScavTrap Claque("Serena");
	Claque.attack("Bob");
	Claque.takeDamage(5);
	Claque.beRepaired(1000);

	std::cout << std::endl << "On fait une creation par copie" << std::endl;
	ScavTrap New(Claque);
	New.attack("Roger");
	ScavTrap encore;
	encore = New;
	encore.setName("Encore");
	encore.takeDamage(100);

	return 0;
}
