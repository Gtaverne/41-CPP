#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << std::endl << "------------" << std::endl;
	std::cout << "Ici on cree DiamondTrap" << std::endl;
	std::cout << "------------" << std::endl;
	DiamondTrap Frag1("Serena");
	Frag1.attack("Bob");
	Frag1.takeDamage(5);
	Frag1.beRepaired(1000);
	std::cout << "------------" << std::endl;
	std::cout << "attack provient de ScavTrap, le reste est le defaut claptrap" << std::endl;
	std::cout << "------------" << std::endl;

	std::cout << std::endl << "------------" << std::endl;
	std::cout << "On fait une creation par copie" << std::endl;
	std::cout << "------------" << std::endl;
	DiamondTrap Frag2(Frag1);
	Frag2.attack("Roger");
	DiamondTrap Frag3;
	Frag3 = Frag2;
	Frag3.setName("Frag3");
	Frag3.takeDamage(100);
	Frag3.guardGate();

	Frag1.highFivesGuys();

	return 0;
}
