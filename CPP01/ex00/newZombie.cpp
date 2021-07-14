#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie*	nzomb = new Zombie(name);
	return (nzomb);
}