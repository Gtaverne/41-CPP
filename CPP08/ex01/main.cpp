#include "span.hpp"

int main()
{
	srand(time(NULL));
	{
		Span sp(100);
		for (int i = 0; i < 10; i++)
		{
			int k = rand() % 100;
			std::cout << "New element : " << k << std::endl;
			sp.addNumber(k);
		}
		
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	}
	std::cout << "----------More tests on exceptions-----------" << std::endl;
	{
		Span spn(3);
		spn.addNumber(1000);
		spn.addNumber(15);
		spn.addNumber(100);
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