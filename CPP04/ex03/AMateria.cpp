#include "AMateria.hpp"

//Canon
AMateria::AMateria()
{
	_materia_type = "Typeless";
	std::cout << "Materia Typeless constructed with default constructor" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	_materia_type = src.getType();
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	_materia_type = rhs.getType();
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "Materia "<< _materia_type << " destructed" << std::endl;
}

//Getters and setters
std::string const & AMateria::getType() const
{
	return _materia_type;
}

//Class functions
void AMateria::AMateria::use(ICharacter& target)
{
	std::cout << "Void materia used on " << target.getName() << std::endl;

}


AMateria::AMateria(std::string const & type)
{
	_materia_type = type;
	std::cout << "Materia "<< _materia_type << " constructed" << std::endl;
}
