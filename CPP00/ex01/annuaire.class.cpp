#include <iostream>
#include "annuaire.class.hpp"

member::member( void )
{
	std::cout << "Annuaire vide cree" << std::endl;
	return ;
}

member::~member( void )
{
	std::cout << "Annuaire vide cree" << std::endl;
	return ;
}

std::string	member::getvalue (int val)
{
	if (val == 0)
		return (this->_first_name);
	else if (val == 1)
		return (this->_last_name);
	else if (val == 2)
		return (this->_nickname);
	else if (val == 3)
		return (this->_phone_number);
	else if (val == 4)
		return (this->_darkest_secret);
	return ("Big mistake");
}

void member::setvalue(int val, std::string str)
{
	if (val == 0)
		this->_first_name = str;
	else if (val == 1)
		this->_last_name = str;
	else if (val == 2)
		this->_nickname = str;
	else if (val == 3)
		this->_phone_number = str;
	else if (val == 4)
		this->_darkest_secret = str;
}

int member::addcontact(int i)
{
	std::string	val;

	std::cout << "Creation d'un nouveau contact" << std::endl;
	std::cout << "Saisie du first name" << std::endl;
	std::cin >> val;
	setvalue(0, val);
	std::cout << "Saisie du last name" << std::endl;
	std::cin >> val;
	setvalue(1, val);
	std::cout << "Saisie du surnom" << std::endl;
	std::cin >> val;
	setvalue(2, val);
	std::cout << "Saisie du numero" << std::endl;
	std::cin >> val;
	setvalue(3, val);
	std::cout << "Dis moi un secret" << std::endl;
	std::cin >> val;
	setvalue(4, val);

	return (i + 1);
}