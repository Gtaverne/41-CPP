#include "Zombie.hpp"


int main ()
{
	Zombie* amedee;

	amedee = newZombie("Amedee");
	amedee->announce();
	randomChump("Arsene");
	delete amedee;
	return (0);
}