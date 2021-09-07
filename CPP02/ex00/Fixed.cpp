#include "Fixed.hpp"

//Canon
Fixed::Fixed(void) : _valfix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (Fixed const &input)
{
	std::cout << "Copy constructor called" << std::endl;	
	*this = input;
}

Fixed & Fixed::operator=(Fixed const & right)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_valfix = right.getRawBits();
	return *this;
}

//Setter & getter
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_valfix;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_valfix = raw;
}

