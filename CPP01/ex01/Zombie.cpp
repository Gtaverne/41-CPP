#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_zname << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie	(std::string zombname)
{
	this->_zname = zombname;
	std::cout << this->_zname << " has been created" << std::endl;

}

Zombie::Zombie (void)
{
	this->_zname = "x";
}

void Zombie::setname(std::string name)
{
	this->_zname = name;
}

Zombie::~Zombie	(void)
{
	std::cout << this->_zname << " has been destroyed" << std::endl;
}
