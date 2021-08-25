# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _guard(false)
{
	_hp = 100;
	_mp = 50;
	_atk = 20;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap::ClapTrap(name), _guard(false)
{
	_hp = 100;
	_mp = 50;
	_atk = 20;
}

ScavTrap::ScavTrap (ScavTrap const &input)
{
	std::cout << "Creation of a ScavTrap by copy" << std::endl;
	*this = input;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destruction of a Scavtrap : " << _name << std::endl;

}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::setName(rhs.getName());
	ClapTrap::setHP(rhs.getHP());
	ClapTrap::setMP(rhs.getMP());
	ClapTrap::setATK(rhs.getATK());
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _atk << " points of damage !" << std::endl;
}


void guardGate();
