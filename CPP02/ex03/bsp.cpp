#include "Point.hpp"

Fixed side (Point const test, Point const corn1, Point const corn2)
{
	Fixed tmp;

	tmp = (test.getX() - corn2.getX()) * (corn1.getY() - corn2.getY()) - (corn1.getX() - corn2.getX()) * (test.getY() - corn2.getY());
	return tmp;
}

bool bsp (Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1, d2, d3;
	bool has_neg, has_pos;


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "point is " << point << std::endl;

	d1 = side(point, a, b);
	d2 = side(point, b, c);
	d3 = side(point, c, a);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return !(has_neg && has_pos);
}
