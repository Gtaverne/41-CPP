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
	std::map<std::string, FnPtr> _functionmap;
	_functionmap["DEBUG"] = &Karen::debug;
	_functionmap["INFO"] = &Karen::info;
	_functionmap["WARNING"] = &Karen::warning;
	_functionmap["ERROR"] = &Karen::error;

	(this->*_functionmap[input])();
}