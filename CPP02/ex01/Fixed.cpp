#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_valfix = 0;
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

Fixed::Fixed (int const val)
{
	std::cout << "Int constructor called" << std::endl;	
	this->setRawBits(val);
}


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

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_valfix = rhs.getRawBits();
	return *this;
}
