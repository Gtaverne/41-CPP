#include "span.hpp"

#define RANGE 100000
#define RANDOM_RANGE 100000000

int main()
{
	srand(time(NULL));
	{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}

	{
		Span sp(RANGE);
		for (int i = 0; i < RANGE; i++)
		{
			int k = rand() % RANDOM_RANGE;
			//std::cout << "New element : " << k << std::endl;
			sp.addNumber(k);
		}
		
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	}
	std::cout << "----------More tests on exceptions-----------" << std::endl;
	{
		Span spn(5);
		std::vector<int> v;
		//We can't do vector<int> vect{ 10, 20, 30 } without cpp11
		v.push_back(7);
		v.push_back(5);
		v.push_back(16);
		v.push_back(8);
		v.push_back(100);
		spn.addmanyNumbers(v.begin(), v.end());
		std::cout << "Longest span: " << spn.longestSpan() << std::endl;
		std::cout << "Shortest span: " << spn.shortestSpan() << std::endl;
		//We try the "Exceeding max length" exception
		try
		{
			spn.addNumber(100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		//We try the "span in too short" exception
		Span zerol;
		try
		{
			zerol.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Span onel(1);
		try
		{
			onel.addNumber(1);
			onel.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}