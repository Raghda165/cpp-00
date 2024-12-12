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

class Contacts{
	public:
		char first_name[9];
		char last_name[9];
		char nickname[9];
		char darkest_secret[9];
		char phone_number[9];
};
class PhoneBook{
	public:
		Contacts contacts_array [8];
		int i;
		void search(Contacts *contacts_array, int i);
		void add(Contacts contact, int i);
};

#endif
