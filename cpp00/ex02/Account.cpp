#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account::_totalAmount = 0;
int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << "; total:" << _totalAmount << "; deposits:" << _totalNbDeposits << "; withdrawals:" << _totalNbWithdrawals << "\n";
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << "; amount:" << _amount << "; created\n";
}
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << "; amount:" << this->_amount << "; closed\n";
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	int p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits+=1;
	_totalNbDeposits+=1;
	std::cout << "index:" << this->_accountIndex << "; p_amount:" << p_amount << "; deposit:" << deposit << "; amount:" << checkAmount() << "; nb_deposits:" << _nbDeposits << "\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
	if(checkAmount() - withdrawal < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << "; p_amount:" << checkAmount() << "; withdrawal:refused\n";
		return (false);
	}
	else
	{
		_displayTimestamp();
		int p_amount = _amount;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals+=1;
		_totalNbWithdrawals+=1;
		std::cout << "index:" << this->_accountIndex << "; p_amount:" << p_amount << "; withdrawal:" << withdrawal << "; amount:" << checkAmount() << "; nb_withdrawals:" << _nbWithdrawals << "\n";
		return (true);
	}
}
int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << "; amount:" << this->_amount << "; deposits:" << _nbDeposits << "; withdrawals:" << _nbWithdrawals << "\n";
}

void Account::_displayTimestamp(void)
{
	std::time_t currentTime;
	std::tm* timeInfo;
	char buffer[20]; // Dimensione sufficiente per il timestamp nel formato richiesto

	std::time(&currentTime);
	timeInfo = std::localtime(&currentTime);

	std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeInfo);

	std::cout << buffer << " ";
}
