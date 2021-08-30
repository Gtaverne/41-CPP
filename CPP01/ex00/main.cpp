#include "Zombie.hpp"


int main ()
{
	Zombie* amedee;

	amedee = newZombie("Amedee");
	amedee->announce();
	randomChump("Arsene");
	delete amedee;
	std::cout << "Everything is already clean by now" << std::endl;
	return (0);
}