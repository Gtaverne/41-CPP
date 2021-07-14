#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
	void	announce(void);
	void	setname(std::string name);
	Zombie	(std::string zombname);
	Zombie	(void);
	~Zombie	(void);

	private:
	std::string	_zname;

};

Zombie* zombieHorde( int N, std::string name );
void	hordcrusher (Zombie* horde);


#endif