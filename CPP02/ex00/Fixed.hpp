#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed&);

	private:
	int valfix;
	static int const nb = 8;
};

#endif 