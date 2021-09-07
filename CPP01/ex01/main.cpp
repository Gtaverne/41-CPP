#include "Zombie.hpp"

int main ()
{
	int N = 12;
	Zombie *horde;

	std::cout << "Let us create a hord of Rogers" << std::endl;
	horde = zombieHorde(N, "Roger");

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	std::cout << std::endl << "ENOUGH OF THEM" << std::endl;
	hordcrusher(horde);
	std::cout << "Good riddance" << std::endl;
}
