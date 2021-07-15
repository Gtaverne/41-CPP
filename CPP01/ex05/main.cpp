#include "Karen.hpp"

int main()
{
	Karen TheKaren;

	std::cout << std::endl;
	TheKaren.complain("DEBUG");
	std::cout << std::endl;
	TheKaren.complain("INFO");
	std::cout << std::endl;
	TheKaren.complain("WARNING");
	std::cout << std::endl;
	TheKaren.complain("ERROR");
}
