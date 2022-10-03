#include	"Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if ( this->_amount >= withdrawal )
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		return (true);
	}
	else
	{
		return (false);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "status" << std::endl;
}

/* dipslay infos about all accounts, like : total amount, deposits, withdrawals, number of accounts */
void	Account::displayAccountsInfos( void )
{
	std::cout <<	"accounts:" + std::to_string(Account::_nbAccounts) + ";"
					"total:" + std::to_string(Account::_totalAmount) + ";"
					"deposists:" + std::to_string(getNbDeposits()) + ";"
					"withdrawals:" + std::to_string(getNbWithdrawals()) << std::endl;
}

/* Constructor of Account, it gets called when the object gets created */
Account::Account ( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_totalAmount += _amount;
	Account::_nbAccounts++;

	std::cout	<< "index:" + std::to_string(Account::_accountIndex) + ";"
				<< "amount:" + std::to_string(this->_amount) + ";"
				<< "created" << std::endl;
}

/* Deconstructor, it gets called when the scope of the object ends */
Account::~Account ( )
{
	std::cout	<< "index:" + std::to_string(Account::_accountIndex) + ";"
				<< "amount:" + std::to_string(this->_amount) + ";"
				<< "closed" << std::endl;
}
