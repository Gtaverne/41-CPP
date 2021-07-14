#include <iostream>

int main()
{
	
	std::string source = "HI THIS IS BRAIN";

	std::string* stringptr = NULL;
	std::string& stringref = source;	
	stringptr = &source;

	std::cout << stringref << std::endl;
	std::cout << *stringptr << std::endl;
}