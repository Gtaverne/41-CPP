#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
	void	announce(void);
	Zombie	(std::string zombname);
	~Zombie	(void);

	private:
	std::string	_zname;

};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif