/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:02:50 by ryagoub           #+#    #+#             */
/*   Updated: 2025/01/09 16:59:17 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
void Account::	_displayTimestamp( void )
{
	std::time_t current_time = std::time(NULL);
    std::tm *tm_struct = std::localtime(&current_time);
    char formatted_time[16];
    std::strftime(formatted_time, sizeof(formatted_time), "%Y%m%d_%H%M%S", tm_struct);
    std::cout << "[" << formatted_time << "] ";

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
	 _displayTimestamp();
	 std::cout << "accounts:"<<_nbAccounts << ";";
	  std::cout << "total:"<<_totalAmount << ";";
	  std::cout << "deposits:"<<_totalNbDeposits << ";";
	  std::cout << "withdrawals:"<<_totalNbWithdrawals<<std::endl;
 }
Account:: Account( int initial_deposit )
{
	this -> _accountIndex= _nbAccounts ;
	this-> _amount = initial_deposit;
	_totalAmount= _totalAmount+this->_amount;
	this->	_nbDeposits =0;
	this ->	_nbWithdrawals = 0;
	 _displayTimestamp();
	 std::cout<<"index:"<<this-> _accountIndex << ";"<<
	"amount:"<<this->_amount<<";"<<"created"<<std::endl;
	_nbAccounts++;
}


void Account::	makeDeposit( int deposit )
{
	 _displayTimestamp();
	std::cout<<"index:"<<this -> _accountIndex << ";"<<"p_amount:"<<this->_amount<<";";
	this-> _nbDeposits++;
	this->_amount +=deposit;
	_totalAmount+=deposit;
	_totalNbDeposits++;
	std::cout<<"deposit:"<<deposit<<";"<<"amount:"<<this->_amount<<";"<<"nb_deposits:"<<this->_nbDeposits<<std::endl;
}
bool Account::	makeWithdrawal( int withdrawal )
{
	 _displayTimestamp();
	std::cout<<"index:"<<this -> _accountIndex << ";"<<"p_amount:"<<this->_amount<<";";
	if(this-> _amount > withdrawal)
	{
		Account::_totalNbWithdrawals ++;
		this->_nbWithdrawals++;
		this->_amount-=withdrawal;
		_totalAmount-=withdrawal;
		std::cout<<"withdrawal:"<<withdrawal<<";"<<"amount:"<<this->_amount<<";"<<"nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
		return(1);
	}
	else
	{
		std::cout<<"withdrawal:refused"<<std::endl;
		return(0);
	}
}
int	Account::	checkAmount( void ) const
{
	return(this->_amount);
}
void Account::	displayStatus( void ) const
{
	 _displayTimestamp();
	std::cout<<"index:"<<this -> _accountIndex << ";"<<
	"amount:"<<this->_amount<<";"<<"deposits:"<<this->_nbDeposits<<";"<<"withdrawals:"<<this->_nbWithdrawals<<std::endl;


}
Account::~Account()
{
	 _displayTimestamp();
	std::cout<<"index:"<<this -> _accountIndex << ";"<<"amount:"<<this->_amount<<";"<<"closed"<<std::endl;
}




