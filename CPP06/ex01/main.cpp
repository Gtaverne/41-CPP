#include "Data.hpp"

int main()
{
	Data *test = new Data;

	std::cout << "Here is the raw adress : " << test << std::endl;
	test->n = 2542351;
	std::cout << "Nothing changes when we update the value : " << test << std::endl;
	std::cout << "Here is the serialized value : " << serialize(test) << std::endl;
	std::cout << "we reinterpret it : " << deserialize(serialize(test)) << std::endl;


	delete test;
}