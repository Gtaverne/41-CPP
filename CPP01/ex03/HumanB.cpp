#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{

}

void HumanB::setWeapon(Weapon &wep)
{
	_wepaddr = &wep;
}

HumanB::~HumanB()
{

}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << (*_wepaddr).getname() << std::endl;
}