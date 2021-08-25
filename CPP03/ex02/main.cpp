#include "FragTrap.hpp"

int main(void)
{
	std::cout << std::endl << "------------" << std::endl;
	std::cout << "Ici on cree un FragTrap" << std::endl;
	std::cout << "------------" << std::endl;
	FragTrap Frag1("Serena");
	Frag1.attack("Bob");
	Frag1.takeDamage(5);
	Frag1.beRepaired(1000);
	std::cout << "------------" << std::endl;
	std::cout << "Rien n'a ete redefini" << std::endl;
	std::cout << "------------" << std::endl;

	std::cout << std::endl << "------------" << std::endl;
	std::cout << "On fait une creation par copie" << std::endl;
	std::cout << "------------" << std::endl;
	FragTrap Frag2(Frag1);
	Frag2.attack("Roger");
	FragTrap Frag3;
	Frag3 = Frag2;
	Frag3.setName("Frag3");
	Frag3.takeDamage(100);


	return 0;
}
