#include "Fixed.hpp"

//The canon

Fixed::Fixed(void)
{
	_valfix = 0;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed (Fixed const &input)
{
	*this = input;
}

Fixed::Fixed (int const val)
{
	_valfix = val << _nb;
}

Fixed::Fixed (float const val)
{
	_valfix = roundf(val * ( 1 << _nb));
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_valfix = rhs.getRawBits();
	return *this;
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

//Simple functions
float Fixed::toFloat(void) const
{
	return (roundf(_valfix) / (1 << _nb));
}

int Fixed::toInt(void) const
{
	return _valfix >> _nb;
}

//New operators
Fixed Fixed::operator+(Fixed const & rhs) const
{
	return(Fixed(toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return(Fixed(toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return(Fixed(toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return(Fixed(toFloat() / rhs.toFloat()));
}

//Iterators
Fixed & Fixed::operator++(void)
{
	_valfix++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_valfix++;
	return tmp;
}

Fixed & Fixed::operator--(void)
{
	_valfix--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_valfix--;
	return tmp;
}

bool Fixed::operator>(Fixed const & rhs) const
{
	if (this->_valfix > rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(Fixed const & rhs) const
{
	if (this->_valfix < rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	if (this->_valfix >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	if (this->_valfix <= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const & rhs) const
{
	if (this->_valfix == rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	if (this->_valfix != rhs.getRawBits())
		return true;
	return false;
}

Fixed const & Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

Fixed const & Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

Fixed const & min(Fixed const & lhs, Fixed const & rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

Fixed const & max(Fixed const & lhs, Fixed const & rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
