#include "easyfind.hpp"


int main ()
{
	int len = 100;
	srand(time(NULL));

	{
		//We experiment the finder on a vector
		std::vector<int> mb;
		for (int i = 0; i < len ; i++)
			mb.push_back(rand() % 100);
		//list printer
		for (int i = 0; i < len ; i++)
			std::cout << mb[i] << " ";
		std::cout << std::endl;

		try
		{
			std::cout << *easyfind(mb, 10) << " found" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "10 :";
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::list<int> laliste;
		for (int i = 0; i < len ; i++)
			laliste.push_back(i);
		try
		{
			int j = rand() % 150;
			std::cout << *easyfind(laliste, j) << " found" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	}

	
	return 0;
}
