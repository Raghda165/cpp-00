/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:32:30 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/12 14:44:20 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
int main()
{
	char action[6];
	PhoneBook phonebook;
	int i;
	i = 0;
	while(1)
	{
		std::cout << "ADD"<<std::endl;
		std::cout<<"SEARCH"<<std::endl;;
		std::cout<<"EXIT"<<std::endl;
		std::cin>>action;
		
		std::string var;
		Contacts contact;
		if (std::strcmp(action,"ADD")==0)
		{
			std::cout << "first name";
			std::cin>>var;
			contact.set_firstname(var);
			std::cout << "last name";
			std::cin>>var;
			contact.set_lastname(var);
			std::cout << "nickname";
			std::cin>>var;
			contact.set_nickname(var);
			std::cout << "phone number";
			std::cin>>var;
			contact.set_phonenumber(var);
			std::cout << "darkest secret";
			std::cin>>var;
			contact.set_darkestsecret(var);
			phonebook.add(contact, i);
			i++;
		}
		else if (strcmp(action,"SEARCH")==0)
		{
			phonebook.search(phonebook.contacts_array, i);
		}
		else if (strcmp(action,"EXIT")==0)
		{
			return(0);
		}
	}
}
