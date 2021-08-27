# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap::ClapTrap(), ScavTrap::ScavTrap(), FragTrap::FragTrap()
{
	std::cout << "Creation of a nameless DiamondTrap" << std::endl;
	_name = "Nameless";
	setName(getName() + "_clap_name");
	_hp = 100;
	_mp = 50;
	_atk = 30;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap::ClapTrap(name), ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
	_name = name;
	std::cout << "Creation of a DiamondTrap : " << _name << std::endl;
	setName(getName() + "_clap_name");
	_hp = 100;
	_mp = 50;
	_atk = 30;
}

DiamondTrap::DiamondTrap (DiamondTrap const &input)
{
	std::cout << "Creation of a DiamondTrap by copy" << std::endl;
	*this = input;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destruction of a Diamondtrap : " << _name << std::endl;

}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	setName(rhs.getName());
	setHP(rhs.getHP());
	setMP(rhs.getMP());
	setATK(rhs.getATK());
	
	setGuardstatus(rhs.getGuardstatus());
	
	return *this;
}


void DiamondTrap::whoAmI(void) {
	std::cout << "Hi, my name is : " << _name << ", I am a : " << getName() << std::endl;

}