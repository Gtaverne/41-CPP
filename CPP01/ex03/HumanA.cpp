#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep): _name(name), _wepref(wep)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _wepref.getname() << std::endl;
}