#include "Base.hpp"

int main()
{
	//Seeding for the random generator
	srand (time(NULL));
	int max = 10;
	Base *BaseTab[max];
	//Generator
	std::cout << "We generate a table of bases" << std::endl;
	for (int i = 0; i < max ; i++)
	{
		BaseTab[i] = generate();
	}
	//Tester pointer
	std::cout << "We test pointers" << std::endl;
	for (int i = 0; i < max ; i++)
	{
		identify(BaseTab[i]);
	}
	std::cout << std::endl << "We test a NULL ptr, so neither A, B or C. RESULT : ";
	Base *nptr = NULL;
	identify(nptr);
	std::cout << std::endl;
	//Tester reference
	std::cout << "We test references" << std::endl;
	for (int i = 0; i < max ; i++)
	{
		identify(*BaseTab[i]);
	}
}
