/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:41:16 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/12 12:37:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
    _accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

std::string get_format(int nb)
{
    std::string time = std::to_string(nb);
    if (time.length() == 1)
        time = "0" + time;
    return (time);
}

void Account::_displayTimestamp()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout << "[" << ltm->tm_year + 1900 << get_format(ltm->tm_mon + 1)
              << get_format(ltm->tm_mday) << "_"  << get_format(ltm->tm_hour)
              << get_format(ltm->tm_min) << get_format(ltm->tm_sec) << "] ";
}
void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:"<< _totalAmount << ";deposits:"
        << _totalNbDeposits << ";withdrawals:" <<  _totalNbWithdrawals << std::endl; 
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
    _nbAccounts--;
    _totalAmount -= _amount;
}

int	Account::checkAmount() const
{
    return (_amount);
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount <<
    ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
   _displayTimestamp();
   std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
             << ";deposit:" << deposit << ";";
   _amount += deposit;
   std::cout << "amount:" << _amount << ";nb_deposits:" << ++_nbDeposits << std::endl;
   _totalNbDeposits++;
   _totalAmount += deposit;
}

   bool Account::makeWithdrawal(int withdrawal)
   {
       _displayTimestamp();
       if (withdrawal > _amount) {
           std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
                     << ";withdrawal:refused" << std::endl;
           return (false);
       }
       std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
                 << ";withdrawal:" << withdrawal << ";";
       _amount -= withdrawal;
       std::cout << "amount:" << _amount << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
       _totalNbWithdrawals++;
       _totalAmount -= withdrawal;
       return (true);
   }