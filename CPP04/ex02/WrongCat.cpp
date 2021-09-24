#include "WrongCat.hpp"

//Canon
WrongCat::WrongCat(void) {
	std::cout << "A new WrongCat has been created" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &input) {
	std::cout << "You copied a WrongCat" << std::endl;
	*this = input;
}

WrongCat::~WrongCat(void) {
	std::cout << "You killed a WrongCat, you have no excuse" << std::endl;
}

WrongCat & WrongCat::operator= (WrongCat const & rhs)
{
	_type = rhs.getType();
	return *this;
}

//Setter & getter


//Member function
void WrongCat::makeSound() const {
	std::cout << getType() << " : I will not meow for you" << std::endl;
}
