#include "Fixed.hpp"

//Canon
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

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_valfix = rhs.getRawBits();
	return *this;
}

Fixed::Fixed (int const val)
{
	std::cout << "Int constructor called" << std::endl;	
	_valfix = val << _nb;
}

Fixed::Fixed (float const val)
{
	std::cout << "Float constructor called" << std::endl;	
	_valfix = roundf(val * ( 1 << _nb));
}

//Setters and getters
int Fixed::getRawBits(void) const
{
	return this->_valfix;
}

void Fixed::setRawBits(int const raw)
{
	this->_valfix = raw;
}

//Class functions
float Fixed::toFloat(void) const
{
	return (roundf(_valfix) / (1 << _nb));
}

int Fixed::toInt(void) const
{
	return _valfix >> _nb;
}

//Global functions
std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
