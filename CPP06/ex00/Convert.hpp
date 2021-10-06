#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <stdlib.h>
# include <string>
# include <iomanip>
# include <limits.h>
# include <math.h>

class Convert
{
public:

//Exceptions
class nonDisplayableException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Non displayable");
		}
};

class impossibleException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("impossible");
		}
};

class NANException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Not a number");
		}
};

class TooBigException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Number too big");
		}
};

class TooSmallException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Number too small");
		}
};

//Canon
	Convert();
	Convert(Convert const & src);
	Convert & operator=(Convert const & rhs);
	virtual ~Convert();

	Convert(std::string str);

//Printers
	void Charprint(std::ostream & o, Convert const & rhs) const;
	void Intprint(std::ostream & o, Convert const & rhs) const;
	void Floatprint(std::ostream & o, Convert const & rhs) const;
	void Doubleprint(std::ostream & o, Convert const & rhs) const;


//Class converters
	char charConv(void) const;
	int intConv(void) const;
	float floatConv(void) const;
	double doubleConv(void) const;

private:
	double _rawdata;
	char _c;

};

std::ostream & operator<<(std::ostream & o, Convert const & rhs);

#endif
