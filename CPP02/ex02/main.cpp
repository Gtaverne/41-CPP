#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(42.4321f);
	std::cout << "a is " << a  << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	//TESTS OF THE PREVIOUS EXERCISE
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << "a is < c ? " << (a < c)  << std::endl;
	std::cout << "a is > c ? " << (a > c)  << std::endl;
	std::cout << "a is > a ? " << (a > a)  << std::endl;
	std::cout << "a is >= a ? " << (a >= a)  << std::endl;
	std::cout << "a is == a ? " << (a == a)  << std::endl;
	std::cout << "a is != a ? " << (a != a)  << std::endl;

	std::cout << std::endl << "Tests du sujet" << std::endl;
	Fixed k;
	Fixed const l(Fixed(5.05f) * Fixed(2));
	std::cout << k << std::endl;
	std::cout << ++k << std::endl;
	std::cout << k << std::endl;
	std::cout << k++ << std::endl;
	std::cout << k << std::endl;

	std::cout << l << std::endl;
	
	std::cout << Fixed::max(k, l) << std::endl;


	std::cout << "a : " << a << " et b : " << b << " max " << max(a, b) << std::endl;
	std::cout << "a : " << a << " et b : " << b << " max (avec Fixed) " << Fixed::max(a, b) << std::endl;
	std::cout << "a : " << a << " et b : " << b << " min " << min(a, b) << std::endl;
	std::cout << "a : " << a << " et b : " << b << " min (avec Fixed) " << Fixed::min(a, b) << std::endl;

	return 0;
}
