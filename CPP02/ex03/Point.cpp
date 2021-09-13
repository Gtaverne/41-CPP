#include "Point.hpp"

//Canon
Point::Point(void) :  _x(0), _y(0)
{
}

Point::~Point(void)
{
}

Point::Point (Point const & pt)
{
	*this = pt;
}

Point & Point::operator=(Point const & pt)
{
	this->_x = pt.getX();
	this->_y = pt.getY();
	return *this;
}

//Custom
Fixed Point::getX(void) const
{
	return this->_x;
}

Fixed Point::getY(void) const
{
	return this->_y;
}

Point::Point(const Fixed &x, const Fixed &y)
{
	_x = x;
	_y = y;
}

std::ostream & operator<<(std::ostream & o, Point const & pt)
{
	o << "x: " << pt.getX() << "  y: " <<  pt.getY();
	return o;
}