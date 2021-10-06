#include "Data.hpp"

int main()
{
	Data *test = new Data;

	std::cout << "Here is the raw adress of the structure : " << test << std::endl;
	test->n = 77777777;
	std::cout << "Nothing changed when we updated the value : " << test << std::endl;
	std::cout << "Here is the serialized value : " << serialize(test) << std::endl;
	std::cout << "we reinterpret it : " << deserialize(serialize(test)) << std::endl;

	std::cout << *test << std::endl;

	delete test;
}