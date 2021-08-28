#include "Brain.hpp"

//Canon
Brain::Brain(void) {
	std::cout << "A new Brain has been created" << std::endl;
	_type = "None";
}

Brain::Brain(Brain const &input) {
	std::cout << "You copied an Brain" << std::endl;
	*this = input;
}

Brain::~Brain(void) {
	std::cout << "You killed an Brain :-(" << std::endl;
}

Brain & Brain::operator= (Brain const & rhs)
{
	_type = rhs.getType();
	return *this;
}

//Setter & getter
std::string Brain::getType(void) const {
	return _type ;
}

void Brain::setType(std::string const newtype) {
	_type = newtype ;
}

//Member function
void Brain::makeSound() const {
	std::cout << getType() << ": for now, I have nothing to say" << std::endl;
}
