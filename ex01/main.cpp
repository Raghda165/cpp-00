/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:32:30 by ryagoub           #+#    #+#             */
/*   Updated: 2025/01/09 20:25:37 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
int main()
{
	std::string action;
	PhoneBook phonebook;
	int i;
	i = 0;
	while(1)
	{	std::cout << "ADD"<<std::endl;
		std::cout<<"SEARCH"<<std::endl;;
		std::cout<<"EXIT"<<std::endl;
		if (!std::getline(std::cin, action))
				return (0);
		std::string var;
		if (action=="ADD")
		{
			Contacts contact;
			while (contact.get_firstname()=="")
			{
				std::cout << "first name: ";
				if (!std::getline(std::cin, var))
					return (0);
				contact.set_firstname(var);
			}
			while (contact.get_lastname()=="")
			{
				std::cout << "last name: ";
				if (!std::getline(std::cin, var))
					return (0);
				contact.set_lastname(var);
			}
			while(contact.get_nickname()=="")
			{
				std::cout << "nickname: ";
				if (!std::getline(std::cin, var))
					return (0);
				contact.set_nickname(var);
			}
			while(contact.get_phonenumber()=="")
			{
				std::cout << "phone number: ";
				if (!std::getline(std::cin, var))
					return (0);
				contact.set_phonenumber(var);
			}
			while(contact.get_darkestsecret()=="")
			{
				std::cout << "darkest secret: ";
				if (!std::getline(std::cin, var))
					return (0);
				contact.set_darkestsecret(var);
			}
			phonebook.add(contact, i);
			i++;
		}
		else if (action=="SEARCH")
		{
			std::string num = "12345678";
			phonebook.search(i);
			std::cout <<"Enter the index you want to search for "<<"\n";
			if (!std::getline(std::cin, var))
				return (0);
			if (num.find(var)==std::string::npos||atoi(var.c_str())>i||atoi(var.c_str())<= 0)
			{
				std::cout<<"you have to enter a number that apear in the phonebook"<<"\n";
				continue ;
			}
			else
				phonebook.printcontact(atoi(var.c_str()));
		}
		else if (action=="EXIT")
			return(0);
	}
}
