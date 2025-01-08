/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 08:55:07 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/10 11:49:37 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
void Contacts:: set_firstname(std::string &first_name)
{
    int i =0;
    while (first_name[i] != '\0')
    {
        if ((first_name[i]>= 65 && first_name[i]<= 90 )||(first_name[i]>= 97 && first_name[i]<= 122))
             i++;
        else 
           { std::cout<<"first name should be an alphabetical character"<<std::endl;
           exit(0);}
    }
    this -> first_name = first_name;
    
}
void Contacts:: set_lastname(std::string &last_name)
{
    int i;
    i = 0;
     while (last_name[i] != '\0')
     {
        if ((last_name[i]>= 65 && last_name[i]<= 90 )||(last_name[i]>= 97 && last_name[i]<= 122))
             i++;
        else 
           { std::cout<<"last name should be an alphabetical character"<<std::endl;
           exit(0);}
    }
    this -> last_name = last_name;
    
}
void Contacts:: set_darkestsecret(std::string &darkest_secret)
{
    this->darkest_secret = darkest_secret;
}
void Contacts:: set_nickname(std::string &nickname)
{
    this->nickname = nickname;
}
void Contacts:: set_phonenumber(std::string &phonenum)
{
    int i;
    i = 0;
    while (phonenum[i] != '\0')
     {
        if ((phonenum[i]>= 48 && phonenum[i]<= 75))
             i++;
        else 
           { std::cout<<"the phone number should be only numbers"<<std::endl;
           exit(0);
           }
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
