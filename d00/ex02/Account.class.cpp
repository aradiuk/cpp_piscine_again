#include "Account.class.hpp"
#include <iostream>
#include <string>
#include <ctime>

void printTimestamp()
{
	std::time_t time = std::time(0);
	std::tm now = *std::localtime(&time);
	std::cout << "[" << 1900 + now.tm_year
					 << 1 + now.tm_mon
					 << now.tm_mday
					 << "_"
					 << 1 + now.tm_hour
					 << 1 + now.tm_min
					 << 1 + now.tm_sec
			 		 << "] ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_nbAmountChecks = 0;

int Account::getNbAccounts() {
	return Account::_nbAccounts;
}

int Account::getTotalAmount() {
	return Account::_totalAmount;
}

int  Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}

int  Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}


void Account::displayAccountsInfos()
{
	printTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
			  << "total:" << getTotalAmount() << ";"
			  << "deposits:" << getNbDeposits() << ';'
			  << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial)
	: _accountIndex(_nbAccounts++)
    , _amount(initial)
    , _nbDeposits(0)
	, _nbWithdrawals(0)
{
	printTimestamp();
	_totalAmount += initial;
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << checkAmount() << ";"
			  << "created" << std::endl;
}

Account::~Account()
{
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << checkAmount() << ";"
			  << "closed" << std::endl;
}

void Account::displayStatus() const
{
	printTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << checkAmount() << ";"
              << "deposits:" << _nbDeposits << ";"
              << "withdrawals:" << _nbWithdrawals << std::endl;
	
}

void Account::makeDeposit(int deposit)
{
	printTimestamp();
	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
    std::cout << "index:" << _accountIndex << ";"
              << "p_amount:" << _amount - deposit << ";"
              << "deposit:" << deposit << ";"
              << "amount:" << checkAmount() << ";"
              << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int with)
{
	printTimestamp();
	bool isAllowed = _amount >= with;
	if (isAllowed) {
		_amount -= with;
		_totalAmount -= with;
		++_nbWithdrawals;
		++_totalNbWithdrawals;
	}
    std::cout << "index:" << _accountIndex << ";"
              << "p_amount:" << (isAllowed ? _amount + with : _amount) << ";"
              << "withdrawal:" ;
	if (isAllowed) {
        std::cout << with << ";"
				  << "amount:" << checkAmount() << ";"
				  << "nb_withdrawals:" << _nbWithdrawals;
	} else {
		std::cout << "refused";
	}
	std::cout << std::endl;
	return isAllowed;
}

int Account::checkAmount() const
{
	++Account::_nbAmountChecks;
	return _amount;
}
