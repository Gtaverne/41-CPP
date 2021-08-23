#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed&);
	Fixed (int const val);
	Fixed (float const val);
	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed & operator=(Fixed const & rhs);

	int toInt(void);

	private:
	int _valfix;
	static int const _nb = 8;
};

#endif