#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <string>

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


//Canon
	Convert();
	Convert(Convert const & src);
	Convert & operator=(Convert const & rhs);
	virtual ~Convert();

//Getters and setters
	std::string getRawstr(void) const;
	void setRawstr(std::string str);

//Class functions
	char charConv();
	int intConv();
	float floatConv();
	double doubleConv();

private:

std::string _rawstring;

};

std::ostream & operator<<(std::ostream & o, Convert const & rhs);

#endif
