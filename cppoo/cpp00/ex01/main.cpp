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
	int i;
	i = 0;
	while(1)
	{
		std::cout << "ADD"<<std::endl;
		std::cout<<"SEARCH"<<std::endl;;
		std::cout<<"EXIT"<<std::endl;
		std::cin>>action;
		PhoneBook phonebook;
		Contacts contact;
		if (std::strcmp(action,"ADD")==0)
		{
			std::cout << "first name";
			std::cin>>contact.first_name;
			std::cout << "last name";
			std::cin>>contact.last_name;
			std::cout << "nickname";
			std::cin>>contact.nickname;
			std::cout << "phone number";
			std::cin>>contact.phone_number;
			std::cout << "darkest secret";
			std::cin>>contact.darkest_secret;
			phonebook.add(contact, i);
			i++;
		}
		else if (std::strcmp(action,"SEARCH")==0)
		{
			phonebook.search(phonebook.contacts_array, i);
		}
		else if (std::strcmp(action,"EXIT")==0)
		{
			return(0);
		}
	}
}
