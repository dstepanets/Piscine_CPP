/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:25:46 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/25 19:25:48 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cl++ Account.class.cpp  resources/tests.cpp

#include "./resources/Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account(int initial_deposit) : 
		_accountIndex(_nbAccounts++), _amount(initial_deposit),
		_nbDeposits(0), _nbWithdrawals(0)
{
	Account:: _totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";created" << std::endl;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";closed" << std::endl;
}

void			Account::_displayTimestamp(void)
{
	std::time_t		t;

	t = std::time(NULL);
	std::cout << std::put_time(std::localtime(&t), "[%y%m%d_%0H%0M%0S] ");
}

int			Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int			Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int			Account::getNbDeposits(void)
{
	return (Account::_nbDeposits);
}

int			Account::getNbWithdrawals(void)
{
	return (Account::_nbWithdrawals);
}

void		Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals 
			<< std::endl;
}