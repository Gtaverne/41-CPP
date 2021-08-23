#include "ClapTrap.hpp"

//The canon and assignations

ClapTrap::ClapTrap(void)
{
	name = "Unknown";
	hp = 10;
	mp = 10;
	atk = 0;
}

ClapTrap::~ClapTrap(void)
{
}

ClapTrap::ClapTrap (ClapTrap const &input)
{
	*this = input;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->hp= rhs.getHP();
	return *this;
}

int ClapTrap::getHP (void) const
{
	return this->hp;
}


//Basic manipulations


// std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs)
// {
// 	o << rhs.toFloat();
// 	return o;
// }
