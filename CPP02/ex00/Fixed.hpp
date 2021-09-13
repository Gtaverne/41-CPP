#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
//Canon	
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed&);
	Fixed & operator=(Fixed const & right);

//Getter and setter
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _valfix;
	static int const _nb = 8;
};

#endif
