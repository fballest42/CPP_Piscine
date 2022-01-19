/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:41:34 by fballest          #+#    #+#             */
/*   Updated: 2022/01/19 13:17:22 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"
// #include <algorithm>
// #include <functional>
// #include <vector>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = 0;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_totalAmount = this->_totalAmount + initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
			<< this->_amount << ";created" << std::endl;	
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
			<< this->_amount << ";closed" << std::endl;
}

Account::Account(void)
{
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

int  Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
			<< std::endl; 	
}

void	Account::makeDeposit( int deposit )
{
	int		old;

	old = this->_amount;
	this->_amount = this->_amount + deposit;
	this->_totalAmount = this->_totalAmount + deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:"
			<< old << ";deposit:" << deposit << ";amount:" << this->_amount
			<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int		old;

	if (withdrawal > this->_amount)
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount
			<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		old = this->_amount;
		this->_amount = this->_amount - withdrawal;
		this->_totalAmount = this->_totalAmount - withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << old
				<< ";withdrawal:" << withdrawal << ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals
			<< std::endl;
	return (0);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
			<< this->_amount << ";deposits:" << this->_nbDeposits
			<< ";withdrawls:" << this->_nbWithdrawals << std::endl;	
}

void	Account::_displayTimestamp( void )
{
	time_t  now;
	char    data[16];

	time(&now);
	strftime(data, 15, "%Y%m%d_%H%M%S", localtime(&now));
	std::cout << "[" << data << "]";
}
