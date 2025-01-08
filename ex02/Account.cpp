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

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
void Account::	_displayTimestamp( void )
{
	 std::time_t current_time = std::time(NULL);
	 std::cout<<"[";
	 std::cout<< current_time;
	 std::cout<<"]"<<" ";
	
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
	 _displayTimestamp();
	// _totalAmount=_totalAmount+_totalNbDeposits-_totalNbWithdrawals;
	 std::cout << "accounts:"<<_nbAccounts << ";";
	  std::cout << "total:"<<_totalAmount << ";";
	  std::cout << "deposits:"<<_totalNbDeposits << ";";
	  std::cout << "withdrawals:"<<_totalNbWithdrawals << ";"<<std::endl;

 }
Account:: Account( int initial_deposit )
{
	// the first lines in the log should be here
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
	// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	 _displayTimestamp();
	std::cout<<"index:"<<this -> _accountIndex << ";"<<"p_amount:"<<this->_amount;
	this-> _nbDeposits++;
	this->_amount +=deposit;
	_totalAmount+=deposit;
	_totalNbDeposits++;
	
	std::cout<<"deposits:"<<deposit<<";"<<"amount:"<<this->_amount<<";"<<"nb_deposits:"<<this->_nbDeposits<<std::endl;
}
bool Account::	makeWithdrawal( int withdrawal )
{
	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	// [19920104_091532] index:0;p_amount:47;withdrawal:refused

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
	// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	 _displayTimestamp();
	std::cout<<"index:"<<this -> _accountIndex << ";"<<
	"amount:"<<this->_amount<<";"<<"deposits:"<<this->_nbDeposits<<";"<<"withdrawals:"<<this->_nbWithdrawals<<std::endl;


}
Account::~Account()
{
	// [19920104_091532] index:0;amount:47;closed
	 _displayTimestamp();
	std::cout<<"index:"<<this -> _accountIndex << ";"<<"amount:"<<this->_amount<<";"<<"closed"<<std::endl;

}




