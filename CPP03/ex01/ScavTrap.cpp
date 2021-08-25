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
	*this = input;
}

ScavTrap::~ScavTrap(void)
{}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::setName(rhs.getName());

}

void guardGate();
