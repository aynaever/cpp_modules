/**
 * File              : Account.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 13.04.2022
 * Last Modified Date: 13.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Account.hpp"
#include	<iostream>
#include	<ctime>

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;

void timestamp( void )
{
	char buff[16];
	time_t t = time(NULL);

	struct tm* tm = localtime(&t);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", tm);
	printf("[%s]", buff);
}

Account::Account ( int deposit )
{
	_accountIndex = Account::getNbAccounts();
	_amount = deposit;
	_totalAmount += deposit;
	Account::_nbAccounts++;
	timestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << deposit << ";created" << std::endl;
}

Account::Account ( void )
{
	timestamp();
	std::cout << "constructor void" << std::endl;
}

Account::~Account ( void )
{
	timestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return	(Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return	(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return	(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return	(Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	timestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
	timestamp();
	_nbDeposits++;
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";deposit:" << deposit
			<< ";amount:" << (_amount + deposit)
			<< ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal )
{
	timestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount;

	if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (1);
	}
	else
	{
		std::cout << ";refused" << std::endl;
		return (0);
	}
}

int Account::checkAmount( void ) const
{
	return (Account::_amount);
}

void Account::displayStatus( void ) const
{
	timestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
