#include "WrongAnimal.hpp"

//Canon
WrongAnimal::WrongAnimal(void) {
	std::cout << "A new WrongAnimal has been created" << std::endl;
	_type = "None";
}

WrongAnimal::WrongAnimal(WrongAnimal const &input) {
	std::cout << "You copied a WrongAnimal" << std::endl;
	*this = input;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "You killed a WrongAnimal, that's bad anyway" << std::endl;
}

WrongAnimal & WrongAnimal::operator= (WrongAnimal const & rhs)
{
	_type = rhs.getType();
	return *this;
}

//Setter & getter
std::string WrongAnimal::getType(void) const {
	return _type ;
}

void WrongAnimal::setType(std::string const newtype) {
	_type = newtype ;
}

//Member function
void WrongAnimal::makeSound() const {
	std::cout << getType() << ": Even if I'm wrong, I will stay silent" << std::endl;
}
