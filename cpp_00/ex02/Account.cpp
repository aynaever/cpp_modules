#include	"Account.hpp"
#include	<time.h>
#include	<iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* getter function for _nbAccounts */
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

/* getter function for _totalAmount */
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

/* getter function for _totalNbDeposits */
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

/* getter function for _totalNbWithdrawals */
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

/* function to return amount of the account */
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

/* print time in form [yyyymmdd_hhmmss] */
void	printTime()
{
	time_t	now;
	tm		*gmtm;

	time (&now);
	gmtm = localtime(&now);
	std::cout	<< "["
				<< std::to_string(1900 + gmtm->tm_year)
				<< std::setfill('0') << std::setw(2) << std::to_string(gmtm->tm_mon)
				<< std::setfill('0') << std::setw(2) << std::to_string(gmtm->tm_mday)
				<< "_"
				<< std::setfill('0') << std::setw(2) << std::to_string(gmtm->tm_hour)
				<< std::setfill('0') << std::setw(2) << std::to_string(gmtm->tm_min)
				<< std::setfill('0') << std::setw(2) << std::to_string(gmtm->tm_sec)
				<< "] ";
}


/* makeDeposit function, increases the amount with deposit, and update some other vars */
void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	printTime();
	std::cout	<< "index:" + std::to_string(Account::_accountIndex) + ";"
				<< "p_amount:" + std::to_string(this->_amount) + ";"
				<< "deposit:" + std::to_string(deposit) + ";"
				<< "amount:" + std::to_string(this->_amount + deposit) + ";"
				<< "nb_deposits:" + std::to_string(this->_nbDeposits)
				<< std::endl;
	_amount += deposit;
}

/* makeWithdrawal function to decrease withdrawal from amount if it's possible */
bool	Account::makeWithdrawal( int withdrawal )
{
	if ( this->_amount >= withdrawal )
	{
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		printTime();
		std::cout	<< "index:" + std::to_string(Account::_accountIndex) + ";"
					<< "p_amount:" + std::to_string(this->_amount) + ";"
					<< "withdrawal:" + std::to_string(withdrawal) + ";"
					<< "amount:" + std::to_string(this->_amount + withdrawal) + ";"
					<< "nb_withdrawals:" + std::to_string(this->_nbWithdrawals)
					<< std::endl;
		this->_amount -= withdrawal;
		return (true);
	}
	else
	{
		printTime();
		std::cout	<< "index:" + std::to_string(Account::_accountIndex) + ";"
					<< "p_amount:" + std::to_string(this->_amount) + ";"
					<< "withdrawal:refused"
					<< std::endl;
		return (false);
	}
}

/* function to display about each account, like : index, amount, deposists, withdrawals */
void	Account::displayStatus( void ) const
{
	printTime();
	std::cout	<< "index:" + std::to_string(this->_accountIndex) + ";"
				<< "amount:" + std::to_string(this->_amount) + ";"
				<< "deposists:" + std::to_string(this->_nbDeposits) + ";"
				<< "withdrawals:" + std::to_string(this->_nbWithdrawals)
				<< std::endl;
}

/* dipslay infos about all accounts, like : total amount, deposits, withdrawals, number of accounts */
void	Account::displayAccountsInfos( void )
{
	printTime();
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
	this->_accountIndex = _nbAccounts;
	Account::_nbAccounts++;

	printTime();
	std::cout	<< "index:" + std::to_string(Account::_accountIndex) + ";"
				<< "amount:" + std::to_string(this->_amount) + ";"
				<< "created" << std::endl;
}

/* Deconstructor, it gets called when the scope of the object ends */
Account::~Account ( )
{
	printTime();
	std::cout	<< "index:" + std::to_string(Account::_accountIndex) + ";"
				<< "amount:" + std::to_string(this->_amount) + ";"
				<< "closed" << std::endl;
}
