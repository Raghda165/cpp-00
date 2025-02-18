/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:01:23 by ryagoub           #+#    #+#             */
/*   Updated: 2025/01/09 21:02:47 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
Contacts PhoneBook:: get_contacts(int i)
{
	return(this->contacts_array[i]);
}
void PhoneBook:: set_contacts(Contacts contact, int i)
{
	this->contacts_array[i] = contact;
}
void PhoneBook::search(int i)
{
	int j;
	int k;
	k = 0;
	std::cout<<"     INDEX|FIRST NAME| LAST NAME|  NICKNAME"<<"\n";
	if (i >= 8)
		i = 8;
	while (k != i)
	{
		std::cout <<"         "<<k+1<<"|";
		j = 9 - get_contacts(k).get_firstname().size();
		while (j >= 0)
		{
			std::cout<< ' ';
			j--;
		}
		std::cout<<get_contacts(k).get_firstname();
		std::cout<<'|';
		j = 9 - get_contacts(k).get_lastname().size();
		while (j >= 0)
		{
			std::cout<< ' ';
			j--;
		}
		std::cout<<get_contacts(k).get_lastname();
		std::cout<<'|';
		j = 9 - get_contacts(k).get_nickname().size();
		while (j >= 0)
		{
			std::cout<< ' ';
			j--;
		}
		std::cout<<get_contacts(k).get_nickname();
		k++;
		std::cout<<std::endl;
	}
}
void PhoneBook:: printcontact(int i)
{
	std::cout << "first name : "<<this->contacts_array[i - 1].get_firstname()<<"\n";
	std::cout << "last name : "<<this->contacts_array[i -1].get_lastname()<<"\n";
	std::cout << "nickname : "<<this->contacts_array[i - 1].get_nickname()<<"\n";
	std::cout << "phonenumber : "<<this->contacts_array[i - 1].get_phonenumber()<<"\n";
	std::cout << "darkest secret : "<<this->contacts_array[i - 1].get_darkestsecret()<<"\n";
}
void PhoneBook:: add(Contacts contact,int i)
{

	int k ;
	k = 0;
	if (i >= 8)
		k = i%8;
	else
		k = i;
	if (i == 8)
		i = 0;
	this->set_contacts(contact,k);
}


