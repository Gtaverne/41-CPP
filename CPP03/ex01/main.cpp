#include "ScavTrap.hpp"

int main(void)
{
	std::cout << std::endl << "------------" << std::endl;
	std::cout << "Ici on cree un ScavTrap" << std::endl;
	std::cout << "------------" << std::endl;
	ScavTrap Claque("Serena");
	Claque.attack("Bob");
	Claque.takeDamage(5);
	Claque.beRepaired(1000);
	std::cout << "------------" << std::endl;
	std::cout << "attack a ete redefinie, pas takeDamage ni beRepaired" << std::endl;
	std::cout << "------------" << std::endl;

	std::cout << std::endl << "------------" << std::endl;
	std::cout << "On fait une creation par copie" << std::endl;
	std::cout << "------------" << std::endl;
	ScavTrap New(Claque);
	New.attack("Roger");
	ScavTrap encore;
	encore = New;
	encore.setName("Encore");
	encore.takeDamage(100);

	Claque.guardGate();

	return 0;
}
