#include "iter.hpp"
#include <string>


void firstfunc(int &i)
{
	// check if the value is above 4 and sets it to 0 or 1 accordingly
	std::cout << i << ( i > 4 ? " BIG": " small") << std::endl;
	( i > 4 ? i = 0 : i = 1);
}

void secondfunc(std::string &str)
{
	// Capitalize the string
	int i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}

int main()
{
	srand(time(NULL));
	{
		int arr[10];
		for (int i = 0; i < 10 ; i++)
		{
			arr[i] = rand() % 10;
		}
		iter(arr, 10, firstfunc);
		for (int i = 0; i < 10 ; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	{
		std::string arr[10];
		for (int i = 0; i < 10 ; i++)
		{
			for (int j = 0; j < 10; j++)
				{arr[i] += ('A' + (rand() % 55));}
			std::cout << arr[i] << std::endl;
		}
		std::cout << std::endl << "Capitalize" << std::endl;
		iter(arr, 10, secondfunc);
		for (int i = 0; i < 10 ; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	return 0;
}

// class Awesome
// {
// public:
// 	Awesome(void): _n(42) {}
// 	int get_n() const {return this->_n;}

// private:
// 	int _n;
// };

// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {o << rhs.get_n(); return o;}

// template <typename T>
// void print(T const & x) {std::cout << x << std::endl; return; }

// int main ()
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];

// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);

// 	return 0;
// }
