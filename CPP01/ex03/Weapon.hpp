#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon
{
	public:
	const std::string &getname(void) const;
	void	setType(std::string name);
	Weapon	();
	Weapon	(std::string name);
	~Weapon	(void);

	private:
	std::string	_weapname;

};

#endif