#include "AAnimal.hpp"

//Canon
AAnimal::AAnimal(void) {
	std::cout << "A new AAnimal has been created" << std::endl;
	_type = "None";
}

AAnimal::AAnimal(AAnimal const &input) {
	std::cout << "You copied an AAnimal" << std::endl;
	*this = input;
}

AAnimal::~AAnimal(void) {
	std::cout << "You killed an AAnimal :-(" << std::endl;
}

AAnimal & AAnimal::operator= (AAnimal const & rhs)
{
	_type = rhs.getType();
	return *this;
}

//Setter & getter
std::string AAnimal::getType(void) const {
	return _type ;
}

void AAnimal::setType(std::string const newtype) {
	_type = newtype ;
}

//Member function
void AAnimal::makeSound() const {
	std::cout << getType() << ": for now, I have nothing to say" << std::endl;
}
