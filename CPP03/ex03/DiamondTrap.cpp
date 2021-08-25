# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap::ClapTrap(), ScavTrap::ScavTrap(), FragTrap::FragTrap()
{
	std::cout << "Creation of a nameless DiamondTrap" << std::endl;
	_hp = 100;
	_mp = 50;
	_atk = 20;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap::ClapTrap(name), ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
	std::cout << "Creation of a DiamondTrap : " << _name << std::endl;
	_hp = 100;
	_mp = 50;
	_atk = 20;
}

DiamondTrap::DiamondTrap (DiamondTrap const &input)
{
	std::cout << "Creation of a DiamondTrap by copy" << std::endl;
	*this = input;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destruction of a Scavtrap : " << _name << std::endl;

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
