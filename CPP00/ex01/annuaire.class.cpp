#include <iostream>
#include "annuaire.class.hpp"

member::member( void )
{
	return ;
}

member::~member( void )
{
	return ;
}

std::string	member::getvalue (int val)
{
	if (val == 0)
		return (this->_index);
	else if (val == 1)
		return (this->_first_name);
	else if (val == 2)
		return (this->_last_name);
	else if (val == 3)
		return (this->_nickname);
	else if (val == 4)
		return (this->_phone_number);
	else if (val == 5)
		return (this->_darkest_secret);
	return ("Big mistake");
}

void member::setvalue(int val, std::string str)
{
	if (val == 0)
		this->_index = str;
	else if (val == 1)
		this->_first_name = str;
	else if (val == 2)
		this->_last_name = str;
	else if (val == 3)
		this->_nickname = str;
	else if (val == 4)
		this->_phone_number = str;
	else if (val == 5)
		this->_darkest_secret = str;
}

void	concat (std::string str)
{
	char res[11];
	int len = 0;

	res[10] = 0;
	if (str.empty())
	{
		std::cout << "--EMPTY-- ";
		return ;
	}
	len = str.length();
	for (int k = 0; k < 10; k++)
	{
		if (len > 10 && k == 9)
			std::cout << '.';
		else if (len >= 10)
			std::cout << str[k];
		else if (len < 10 && k >= 10 - len)
			std::cout << str[len - 10 + k];
		else
			std::cout << ' ';
	}
}

void	display( member *annuaire )
{
	std::cout << "Index     |First Name|Last Name |Nickname  |" << std::endl;
	int i = 0;
	while (i < 8 && !(annuaire[i].getvalue(0).empty()))
	{
		for (int j = 0; j < 4; j++)
		{
			concat(annuaire[i].getvalue(j));
			if (j < 4)
				std::cout << '|';
		}
		std::cout << std::endl;
		i++;
	}
}

int member::addcontact(int i)
{
	std::string	str;

	std::cout << "New contact" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Enter the first name : ";
	std::getline(std::cin, str);
	setvalue(1, str);
	std::cout << "Enter the last name  : ";
	std::getline(std::cin, str);
	setvalue(2, str);
	std::cout << "Enter the nickname   : ";
	std::getline(std::cin, str);
	setvalue(3, str);
	std::cout << "Here goes the phone  : ";
	std::getline(std::cin, str);
	setvalue(4, str);
	std::cout << "Now tell me a secret : ";
	std::getline(std::cin, str);
	setvalue(5, str);
	char ind[2];
	ind[1] = 0;
	ind[0] = i + '0';
	setvalue(0, ind);

	return (i + 1);
}

void member::fullcontact( void )
{
	std::cout << "Index        : " << this->_index << std::endl;
	std::cout << "First Name   : " << this->_first_name << std::endl;
	std::cout << "Last Name    : " << this->_last_name << std::endl;
	std::cout << "Nickname     : " << this->_nickname << std::endl;
	std::cout << "Phone number : " << this->_phone_number << std::endl;
	std::cout << "Dark secret  : " << this->_darkest_secret << std::endl;
	// std::string dummy;
	// std::getline(std::cin, dummy);
}