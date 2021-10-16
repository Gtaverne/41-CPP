#include "whatever.hpp"

int main( void ) {
	std::cout << "The test from the pdf" << std::endl;
	{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	
	std::cout << std::endl << "More tests because we're badasses" << std::endl;
	{
	double a = 3642.35, b = 2854.25424;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "We swap those guys" << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	}
	return 0;

}



//*******************************//
// Uncomment for correction      //
//*******************************//

// class Awesome
// {
// public:
// 	Awesome(): _n(0) {}
// 	Awesome(int n): _n(n) {}
// 	Awesome & operator=(Awesome & rhs) { _n = rhs._n ; return *this;}
// 	virtual ~Awesome() {};

// 	bool operator == (Awesome const &rhs) const {return this->_n == rhs._n;}
// 	bool operator != (Awesome const &rhs) const {return this->_n != rhs._n;}
// 	bool operator > (Awesome const &rhs) const {return this->_n > rhs._n;}
// 	bool operator < (Awesome const &rhs) const {return this->_n < rhs._n;}
// 	bool operator >= (Awesome const &rhs) const {return this->_n >= rhs._n;}
// 	bool operator <= (Awesome const &rhs) const {return this->_n <= rhs._n;}
// 	int get_n() const {return _n;}

	
// private:
// 	int _n;
// };

// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {o << rhs.get_n(); return o;}

// int main(void)
// {
// 	Awesome a(2), b(4);
// 	swap(a,b);
// 	std::cout << a << "" << b << std::endl;
// 	std::cout << max(a,b) << std::endl;
// 	std::cout << min(a,b) << std::endl;
// 	return(0);
// }