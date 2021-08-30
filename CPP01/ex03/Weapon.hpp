#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon
{
	public:
	Weapon	();
	Weapon	(std::string name);
	~Weapon	(void);
	
	const std::string &getname(void) const;
	void	setType(std::string name);

	private:
	std::string	_weapname;

};

#endif