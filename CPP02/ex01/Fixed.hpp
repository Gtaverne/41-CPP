#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
//canon
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed& input);
	Fixed & operator=(Fixed const & rhs);
	
	Fixed (int const val);
	Fixed (float const val);
	
//Setter & getter
	int getRawBits(void) const;
	void setRawBits(int const raw);

	int toInt(void) const;
	float toFloat(void) const;

	private:
	int _valfix;
	static int const _nb = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif