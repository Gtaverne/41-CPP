# include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "Creation of a nameless FragTrap" << std::endl;
	_hp = 100;
	_mp = 100;
	_atk = 30;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap::ClapTrap(name)
{
	std::cout << "Creation of a FragTrap : " << _name << std::endl;
	_hp = 100;
	_mp = 100;
	_atk = 30;
}

FragTrap::FragTrap (FragTrap const &input)
{
	std::cout << "Creation of a FragTrap by copy" << std::endl;
	*this = input;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destruction of a Fragtrap : " << _name << std::endl;

}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::setName(rhs.getName());
	ClapTrap::setHP(rhs.getHP());
	ClapTrap::setMP(rhs.getMP());
	ClapTrap::setATK(rhs.getATK());
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " is soooo happy to see you ! High Five !!" << std::endl;
}
