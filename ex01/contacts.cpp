/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 08:55:07 by ryagoub           #+#    #+#             */
/*   Updated: 2025/01/09 20:41:46 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contacts:: set_firstname(std::string &first_name)
{
    int i =0;
	while (first_name[i] != '\0')
     {
        if (isalpha(first_name[i])|| first_name[i] == ' ')
             i++;
        else
           {
			 std::cout<<"first name should be an alphabetical character REWRITE IT AGAIN"<<std::endl;
			 	return ;
           }
    }
	if(first_name.size()>10)
		{ first_name.erase(first_name.size() - (first_name.size()-10));
		 first_name[9]= '.';}
    this -> first_name = first_name;
}
void Contacts:: set_lastname(std::string &last_name)
{
    int i;
    i = 0;
     while (last_name[i] != '\0')
     {
        if (isalpha(last_name[i])|| last_name[i] == ' ')
             i++;
        else
           {
			 std::cout<<"last name should be an alphabetical character REWRITE IT AGAIN"<<std::endl;
			 return ;
           }
    }
	if(last_name.size()>10)
		{ last_name.erase(last_name.size() - (last_name.size()-10));
		 last_name[9]= '.';}
    this -> last_name = last_name;

}
void Contacts:: set_darkestsecret(std::string &darkest_secret)
{
	if(darkest_secret.size()>10)
		{ darkest_secret.erase(darkest_secret.size() - (darkest_secret.size()-10));
		 darkest_secret[9]= '.';}
    this->darkest_secret = darkest_secret;
}
void Contacts:: set_nickname(std::string &nickname)
{
	if(nickname.size()>10)
		{ nickname.erase(nickname.size() - (nickname.size()-10));
		nickname[9]= '.';}
    this->nickname = nickname;
}
void Contacts:: set_phonenumber(std::string &phonenum)
{
    int i;
    i = 0;

    while (phonenum[i] != '\0')
     {
        if (isdigit(phonenum[i]))
             i++;
        else
		{
			std::cout<<"the phone number should be only numbers"<<std::endl;
			return ;
		}
    }
	if(phonenum.size()>10)
		{
			phonenum.erase(phonenum.size() - (phonenum.size()-10));
			phonenum[9]= '.';
		}
    this->phone_number = phonenum;
}
std::string Contacts:: get_firstname(void)
{
    return(this->first_name);
}
std::string Contacts::  get_lastname(void)
{
    return(this ->last_name);
}

std::string Contacts::  get_darkestsecret(void)
{
    return(this->darkest_secret);
}
std::string Contacts:: get_nickname(void)
{
    return(this->nickname);
}
std::string Contacts::  get_phonenumber(void)
{
    return(this->phone_number);
}
