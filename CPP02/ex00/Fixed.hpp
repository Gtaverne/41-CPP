#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed&);
	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed & operator=(Fixed const & right);

	private:
	int _valfix;
	static int const _nb = 8;
};

#endif