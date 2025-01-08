/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:01:23 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/12 15:03:33 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

void PhoneBook::search(Contacts *contacts_array,int i)
{
	int j;
	int k;
	k = 0;
	if (i >= 8)
		i = 8;
	while (k != i)
	{
		j = 9 - contacts_array[k].get_firstname().size();
		std::cout <<j;
		while (j >= 0)
		{
			std::cout<< ' ';
			j--;
		}
		std::cout<<contacts_array[k].get_firstname();
		std::cout<<'|';
		j = 9 - contacts_array[k].get_lastname().size();
		while (j >= 0)
		{
			std::cout<< ' ';
			j--;
		}
		std::cout<<contacts_array[k].get_lastname();
		std::cout<<'|';
		j = 9 - contacts_array[k].get_nickname().size();
		while (j >= 0)
		{
			std::cout<< ' ';
			j--;
		}
		std::cout<<contacts_array[k].get_nickname();
		std::cout<<'|';
		j = 9 - contacts_array[k].get_phonenumber().size();
		while (j >= 0)
		{
			std::cout<< ' ';
			j--;
		}
		std::cout<<contacts_array[k].get_phonenumber();
		std::cout<<'|';
		j = 9 - contacts_array[k].get_darkestsecret().size();
		while (j >= 0)
		{
			std::cout<< ' ';
			j--;
		}
		std::cout<<contacts_array[k].get_darkestsecret();
		std::cout<<std::endl;
		k++;
	}
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
	contacts_array[k]=contact;
}


