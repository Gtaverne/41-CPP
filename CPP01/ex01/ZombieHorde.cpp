#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setname(name + " " +(char)((i % 26) + 65));
	}

	return (horde);
}

void	hordcrusher (Zombie* horde)
{
	delete [] horde;
}