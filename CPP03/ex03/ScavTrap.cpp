# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _guard(false)
{
	std::cout << "Creation of a nameless ScavTrap" << std::endl;
	_hp = 100;
	_mp = 50;
	_atk = 20;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap::ClapTrap(name), _guard(false)
{
	std::cout << "Creation of a ScavTrap : " << _name << std::endl;
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
	setName(rhs.getName());
	setHP(rhs.getHP());
	setMP(rhs.getMP());
	setATK(rhs.getATK());
	
	setGuardstatus(rhs.getGuardstatus());
	
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " is hitting hard " << target << ", causing " << _atk << " points of damage !" << std::endl;
}

bool ScavTrap::getGuardstatus(void) const
{
	return (this->_guard);
}

void ScavTrap::setGuardstatus(bool in)
{
	this->_guard = in;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered Gate keeper mode" << std::endl;
	_guard = true;
}
