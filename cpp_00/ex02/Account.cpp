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

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts infos" << std::endl;
}

Account::Account ( int initial_deposit )
{
	this->_amount = initial_deposit;
}

Account::~Account ( )
{
}
