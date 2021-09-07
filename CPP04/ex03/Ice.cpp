#include "Ice.hpp"

//Canon
Ice::Ice()
{
	_materia_type = "ice";
	std::cout << "Ice materia created" << std::endl;
}

Ice::Ice(Ice const & src)
{
	_materia_type = src.getType();
}

Ice & Ice::operator=(Ice const & rhs)
{
	_materia_type = rhs.getType();
	return *this;
}

Ice::~Ice()
{
	std::cout << "Materia "<< _materia_type << " destructed" << std::endl;
}

//Class functions
Ice::Ice(std::string const & type)
{
	_materia_type = type;
	std::cout << "Materia "<< _materia_type << " constructed" << std::endl;
}

void Ice::Ice::use(ICharacter& target)
{
	std::cout << "* freezes " << target.getName() << " to the absolute zero" << std::endl;
}

AMateria* Ice::clone() const {
	return new Ice();
}
