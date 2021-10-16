#include "easyfind.hpp"

//Modify CONTAINER_LEN or RANDOM_RANGE to change the probability to find an element
#define CONTAINER_LEN 100
#define RANDOM_RANGE  100

template <typename cont>
void tester(cont &my_cont)
{
	for (int i = 0; i < CONTAINER_LEN ; i++)
		my_cont.insert(my_cont.end(),i);
		//my_cont.insert(my_cont.end(), rand() % RANDOM_RANGE);
	try
	{
		int j = rand() % 150;
		std::cout << std::endl << "Searched value: " << j << std::endl;

		if (CONTAINER_LEN < 200)
		{
			typename cont::iterator it = my_cont.begin();
			std::cout << "Here is the container:" << std::endl;
			for (size_t i = 0; i < my_cont.size(); i++)
				std::cout << *(it++) << ( ((1 + i) % 30) ? " ": "\n");
		}
		std::cout << std::endl << *easyfind(my_cont, j) << ": found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "IT IS AN EXCEPTION: ";
		std::cerr << e.what() << '\n';
	}
}


int main ()
{
	srand(time(NULL));
	{
		//We experiment the finder on a vector
		std::vector<int> vec;
		tester(vec);
	}

	{
		//We experiment the finder on a deque
		std::deque<int> dq;
		tester(dq);
	}

	{
		//We experiment the finder on a list
		std::list<int> laliste;
		tester(laliste);
	}

	{
		//We experiment the finder on a set
		std::set<int> st;
		tester(st);
	}

	return 0;
}
