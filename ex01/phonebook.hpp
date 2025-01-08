/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:03:42 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/12 14:24:27 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <cstring>
#include <cstdlib>

class Contacts
{
	private:
	 	std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;
	public:
		void set_firstname(std::string &first_name);
		void set_lastname(std::string &last_name);
		void set_darkestsecret(std::string &darkest_secret);
		void set_nickname(std::string &nickname);
		void set_phonenumber(std::string &phonenum);
		std::string get_firstname(void);
		std::string  get_lastname(void);
		std::string  get_darkestsecret(void);
		std::string  get_nickname(void);
		std::string  get_phonenumber(void);
};
class PhoneBook{
	public:
		Contacts contacts_array [8];
		int i;
		void search(Contacts *contacts_array, int i);
		void add(Contacts contact, int i);
};

#endif
