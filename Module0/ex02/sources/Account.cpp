/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:54:20 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/24 23:42:05 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::time_t new_t = std::time(0);
	std::tm* local = std::localtime(&new_t);
	std::cout << std::setfill('0') << "[" << local->tm_year + 1900 <<
	std::setw(2) << local->tm_mon + 1 <<
	std::setw(2) << local->tm_mday << "_" <<
	std::setw(2) << local->tm_hour <<
	std::setw(2) << local->tm_min <<
	std::setw(2) << local->tm_sec << "]";
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	Account::_nbAccounts++;
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:"
	<< Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
	";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;	
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
	";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
		std::cout << withdrawal;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals
	<< std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	if (this->_amount >= 0)
		return (true);
	else
		return (false);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
	";amount:" << this->_amount << ";deposits:" <<
	this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals <<
	std::endl;
}
