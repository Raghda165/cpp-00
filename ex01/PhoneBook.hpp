/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:03:42 by ryagoub           #+#    #+#             */
/*   Updated: 2025/01/09 20:22:52 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
 #include <iostream>
 #include <cstring>
 #include <cstdlib>
 #include <string>

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
	private:
		Contacts contacts_array [8];
	public:
		Contacts get_contacts(int i);
		void  set_contacts(Contacts contact, int i);
		void search( int i);
		void printcontact(int i);
		void add(Contacts contact, int i);
};

#endif
