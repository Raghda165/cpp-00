/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:02:50 by ryagoub           #+#    #+#             */
/*   Updated: 2025/01/07 21:30:48 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
void Account::	_displayTimestamp( void )
{
	 std::time_t current_time = std::time(nullptr);
	std::cout<< current_time <<" ";
}
int Account::	getNbAccounts( void )
{
	return(_nbAccounts);

}
int Account ::	getTotalAmount( void )
{
	return(_totalAmount);
}

int Account ::	getNbDeposits( void )
{
	return(_totalNbDeposits);
}

 int Account ::	getNbWithdrawals( void )
 {
	return(_totalNbWithdrawals);
 }

  void Account::	displayAccountsInfos( void )
 {
	//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	int j;

	j = 0;
	while (j < _nbAccounts)
	{
		_displayTimestamp();
		j++;

	}
 }
Account:: Account( int initial_deposit )
{
	// the first lines in the log should be here
	int i;
	i = 0;
	this-> _amount = initial_deposit;
	this->	_nbDeposits =0;
	this ->	_nbWithdrawals = 0;
	this -> _accountIndex = i ;
	_nbAccounts++;
	i++;

}


void Account::	makeDeposit( int deposit )
{
	//it should print the [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	this-> _nbDeposits= deposit ;
	this->_amount = _amount + deposit;
	_totalNbDeposits++;
}
bool Account::	makeWithdrawal( int withdrawal )
{
	if(this-> _amount > withdrawal)
		return(_nbWithdrawals++,1);
	else
		return(0);
}
int	Account::	checkAmount( void ) const
{
	return(this->_amount);
}
void Account::	displayStatus( void ) const
{
	 _displayTimestamp();
	std::cout << "index:"<<this->_accountIndex << ";";
	std:: cout<< "amount:"<< this->_amount << ";";
	std:: cout<< "deposits:"<< this->_nbDeposits << ";";
	std:: cout<< "withdrawals:"<< this->_nbWithdrawals << std::endl;


}




