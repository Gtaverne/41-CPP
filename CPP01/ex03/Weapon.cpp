#include "Weapon.hpp"

Weapon::Weapon(void)
{
	_weapname = "naked hands";
}

Weapon::~Weapon()
{
	std::cout << "Desarmement" << std::endl;
}

Weapon::Weapon(std::string something): _weapname(something)
{
	
}

const std::string &Weapon::getname(void) const
{
	return (_weapname);
}

void	Weapon::setType(std::string name)
{
	_weapname = name;
}

