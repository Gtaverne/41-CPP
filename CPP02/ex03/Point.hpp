#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
public:
//Canon
	Point(void);
	~Point(void);
	Point(const Point &pt);
	Point & operator=(Point const & rhs);

	Point(const Fixed &x, const Fixed &y);

	Fixed getX(void) const;
	Fixed getY(void) const;

	private:
	Fixed _x;
	Fixed _y;

};

std::ostream & operator<<(std::ostream & o, Point const & pt);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif