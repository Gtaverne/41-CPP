#include "iter.hpp"
#include <string>


void firstfunc(int &i)
{
	//check if the value is above 4 and sets it to 0 or 1 accordingly
	std::cout << i << ( i > 4 ? " Oui": " Non") << std::endl;
	( i > 4 ? i = 0 : i = 1);
}

void secondfunc(std::string &str)
{
	//Capitalize the string
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