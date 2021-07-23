#include "Karen.hpp"


Karen::Karen(void)
{
	std::cout << "Oh no, a wild Karen has appeared" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "Thanks god, she left..." << std::endl;
}

void Karen::debug( void )
{
	std::cout << "Call your manager NOW. DEBUG the situation." << std::endl;
	std::cout << "My constitutional rights have been violated." << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "For your INFO, bacon is a human right! I should not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "You don't know who I am and you have no idea of my connections" << std::endl;
	std::cout << "I am WARNING you, I know your boss very well!" << std::endl;
}

void Karen::error( void )
{
	std::cout << "There must be a mistake. Asking me to pay for what I ordered is an ERROR" << std::endl;
}

void Karen::complain(std::string input)
{
	const char *possibilities[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*Vectorfunc)(void);
	int res = 0;
	//faire un while qui pue
	while (res < 4 && input != possibilities[res])
		res++;

	switch (res)
	{
	case 0:
		Vectorfunc = &Karen::debug;
		(this->*Vectorfunc)();
	case 1:
		Vectorfunc = &Karen::info;
		(this->*Vectorfunc)();
	case 2:
		Vectorfunc = &Karen::warning;
		(this->*Vectorfunc)();
	case 3:
		Vectorfunc = &Karen::error;
		(this->*Vectorfunc)();
		break;
	default:
		std::cout << "A random complaint. Ignore it" << std::endl;
		return ;
	}
}