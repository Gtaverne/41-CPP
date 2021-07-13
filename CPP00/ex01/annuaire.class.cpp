#include <iostream>
#include "annuaire.class.hpp"

//fonctions d'annuaire

int phonebook::in = 0;

phonebook::phonebook( void )
{
	std::cout << "We created a phonebook" << std::endl;
	std::cout << "There are only 3 commands: ADD, EXIT or SEARCH" << std::endl;
	return ;
}

phonebook::~phonebook( void )
{
	std::cout << "That's all, you called the destructor" << std::endl;
	return ;
}

void	phonebook::bigloop(std::string buf)
{
	if (buf == "ADD")
		this->_addmember();
	else if (buf == "SEARCH")
		this->_searchmember();
	std::cout << "Write ADD, EXIT or SEARCH" << std::endl;
}

void	phonebook::_concat (std::string str)
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

void	phonebook::_addmember()
{
	std::string 	dummy;
	while (this->in < 0 || this->in > 7)
	{
		std::cout << "The list is full, overwrite a contact :" << std::endl;
		for (int k=0; k < this->in; k++)
		{
			std::cout << k << " : " << this->list[k].getvalue(1) << std::endl;
		}
		std::getline(std::cin, dummy);
		if (!dummy.empty() && dummy[0] >= '0' && dummy[0] <= '7' && !dummy[1])
		{
			this->list[dummy[0] - '0'].addcontact(dummy[0] - '0');
			break ;
		}
		else
		{
			std::cout << "This is not a contact in the list" << std::endl;
			break ;
		}
		
		this->in = 8;
	}
	if (this->in < 8)
		this->in = this->list[this->in].addcontact(this->in);
}

void	phonebook::_searchmember()
{
	if (this->in == 0)
		std::cout << "There is nothing to search, write ADD" << std::endl;
	else
	{
		int index = -1;
		std::string saisie;
		while (index < 0 || index > this->in)
		{
			this->_display (this->list);
			std::cout << "Write the index to investigate" << std::endl;
			std::getline(std::cin, saisie);
			if (saisie.empty() || (index = saisie[0] - '0') < 0 || index >= this->in || saisie[1] != 0)
			{	
				std::cout << "Incoherent index" << std::endl;
				index = -1;
			}
			else
				this->list[index].fullcontact();			
		}
	}
}

void	phonebook::_display( member *annuaire )
{
	std::cout << "Index     |First Name|Last Name |Nickname  |" << std::endl;
	int i = 0;
	while (i < 8 && !(annuaire[i].getvalue(0).empty()))
	{
		for (int j = 0; j < 4; j++)
		{
			this->_concat(annuaire[i].getvalue(j));
			if (j < 4)
				std::cout << '|';
		}
		std::cout << std::endl;
		i++;
	}
}

//fonctions de member

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

}