#include "ClapTrap.hpp"

//The canon and assignations

ClapTrap::ClapTrap(void) : _hp(10), _mp(10), _atk(0)
{
	_name = "Unknown";
	std::cout << "Default creation of a Claptrap : " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _mp(10), _atk(0)
{
	this->_name = name;
	std::cout << "Creation of a Claptrap : " << _name << std::endl;

}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destruction of a Claptrap : " << _name << std::endl;
}

ClapTrap::ClapTrap (ClapTrap const &input)
{
	*this = input;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hp = rhs.getHP();
	this->_mp = rhs.getMP();
	this->_atk = rhs.getATK();
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _atk << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hp -= amount;
	std::cout << "ClapTrap " << _name << " got attacked, receiving " << amount << " damages. He has now " << _hp << " health point !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	std::cout << "ClapTrap " << _name << " got repaired, of " << amount << " damages. He has now " << _hp << " health point !" << std::endl;

}

std::string ClapTrap::getName (void) const
{
	return this->_name;
}

int ClapTrap::getHP (void) const
{
	return this->_hp;
}

int ClapTrap::getMP (void) const
{
	return this->_mp;
}

int ClapTrap::getATK (void) const
{
	return this->_atk;
}

void ClapTrap::setName (std::string str)
{
	this->_name = str;
}

void ClapTrap::setHP (int hp)
{
	this->_hp = hp;
}

void ClapTrap::setMP (int mp)
{
	this->_mp = mp;
}

void ClapTrap::setATK (int atk)
{
	this->_atk = atk;
}


//Basic manipulations

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs)
{
	o << rhs.getName();
	return o;
}
