#include "Cure.hpp"

//Canon
Cure::Cure()
{
	_materia_type = "cure";
	std::cout << "The materia is actually a cure" << std::endl;
}

Cure::Cure(Cure const & src)
{
	_materia_type = src.getType();
}

Cure & Cure::operator=(Cure const & rhs)
{
	_materia_type = rhs.getType();
	return *this;
}

Cure::~Cure()
{
	std::cout << "CURE DESTRUCTOR" << std::endl;
}

//Class functions
Cure::Cure(std::string const & type)
{
	_materia_type = type;
	std::cout << "Materia "<< _materia_type << " constructed" << std::endl;
}

void Cure::Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}

AMateria* Cure::clone() const {
	return new Cure();
}
