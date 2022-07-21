/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:53:31 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/21 17:53:32 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookClass.hpp"

std::string truncate(std::string str)
{
	std::string truncated;

	if (str.length() >= 10)
	{
		truncated = str.substr(0, 9) + ".";
		return (truncated);
	}
	return (str);
}

int PhoneBook::_nb_contact = 0;

PhoneBook::PhoneBook(void){}

PhoneBook::~PhoneBook(void){}

void PhoneBook::add_contact(int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string nickname; 
	std::string phone_number;
	std::string	darkest_secret;

	do
	{
		std::cout << "First Name : ";
		if(std::getline(std::cin, first_name) == NULL)
			exit(1);
	} while (first_name.length() < 1);
	do
	{
		std::cout << "Last name : "; 
		if (std::getline(std::cin, last_name) == NULL)
		exit(1);
	} while (last_name.length() < 1);
	do
	{
		std::cout << "Nickname : "; 
		if (std::getline(std::cin, nickname) == NULL)
		exit(1);
	} while (nickname.length() < 1);
	do
	{
		std::cout << "Phone Number : "; 
		if (std::getline(std::cin, phone_number) == NULL)
		exit(1);
	} while (nickname.length() < 1);
	do
	{
		std::cout << "Darkest Secret : "; 
		if (std::getline(std::cin, darkest_secret) == NULL)
		exit(1);
	} while (darkest_secret.length() < 1);
	_contacts[i].set_information(first_name, last_name, nickname, phone_number, darkest_secret);
	if (_nb_contact < 8)
		_nb_contact++;
}

void	PhoneBook::display_contact_info(void) const
{
	std::string	i;
	int contact_num = 0;

	std::cout << std::endl << "Which contact number do you want to display ?" << std::endl;
	std::getline(std::cin, i);
	if(i.length() == 1)
	{
		contact_num = atoi(i.c_str());
		if (contact_num > _nb_contact - 1)
		{
			std::cout << "Error : Contact doesn't exist" << std::endl;
			return ;
		}
		if (contact_num < 0 || contact_num >= 8)
		{
			std::cout << "Error : Contact value should be in a range of 0 to 7" << std::endl;
			return ;
		}
		std::cout << "FIRST NAME : " << _contacts[contact_num].get_first_name()<< std::endl;
		std::cout << "LAST NAME : " << _contacts[contact_num].get_last_name()<< std::endl;
		std::cout << "NICKNAME : " << _contacts[contact_num].get_nickname() << std::endl;
		std::cout << "PHONE NUMBER : " << _contacts[contact_num].get_phone_number() << std::endl;
		std::cout << "DARKEST SECRET : " << _contacts[contact_num].get_darkest_secret() << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
		std::cout << "Error : Contact value should be in a range of 0 to 7" << std::endl;		
}

int	PhoneBook::display_contact_list(void) const
{
	if(_nb_contact == 0)
	{
		std::cout << "No contact to display, use ADD to create a contact" << std::endl;
		return (-1);
	}
	std::cout << "|" << std::setw(10) << "INDEX" 
			<< "|" << std::setw(10) << "FIRST NAME" 
			<< "|" << std::setw(10) << "LAST NAME" 
			<< "|" << std::setw(10) << "NICKNAME" << "|"
			<< std::endl;
 	for(int i = 0; i < _nb_contact; i++)
	{
		std::cout << "|" << std::setw(10) << i 
				<< "|" << std::setw(10) << truncate(_contacts[i].get_first_name())
				<< "|" << std::setw(10) << truncate(_contacts[i].get_last_name())
				<< "|" << std::setw(10) << truncate(_contacts[i].get_nickname()) << "|"
				<< std::endl;
	}
	return (0);
}

