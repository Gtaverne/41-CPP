#ifndef	HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	void	attack(void);
	void	setWeapon(Weapon &);
	HumanB	(std::string name);
	HumanB	(void);
	~HumanB	(void);

	private:
	std::string	_name;
	Weapon		*_wepaddr;

};

#endif