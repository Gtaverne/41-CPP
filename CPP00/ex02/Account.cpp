#include <functional>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <chrono>

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_totalAmount = initial_deposit;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_totalAmount << ";";
	std::cout << "created" << std::endl;
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_totalAmount = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_totalAmount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
}

int	Account::getNbAccounts( void )
{
	std::cout << "getNbAccounts" << std::endl;
	return 1;
}

int	Account::getTotalAmount( void )
{
	std::cout << "getTotalAmount" << std::endl;
	return 1;
}

int	Account::getNbDeposits( void )
{
	std::cout << "getNbDeposits" << std::endl;
	return 1;
}

int	Account::getNbWithdrawals( void )
{
	std::cout << "getNbWithdrawals" << std::endl;
	return 1;
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "displayAccountsInfos" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "_displayTimestamp" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "make Deposit " << deposit << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "makeWithdrawal " << withdrawal << std::endl;
	return 1;
}

int	Account::checkAmount( void ) const
{
	std::cout << "check Amount " << std::endl;
	return 1;
}

void	Account::displayStatus( void ) const
{
	std::cout << "displayStatus " << std::endl;
}
