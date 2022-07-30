/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:53:24 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:22:45 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string cmd;
	PhoneBook book;
	int contact_num = 0;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if(std::cin.eof())
		{
			std::cout << "Goodbye" << std::endl;
			exit(1);
		}
		if(cmd.compare("EXIT") == 0)
			break;
		else if(cmd.compare("ADD") == 0)
		{
			book.add_contact(contact_num);
			contact_num++;
			if(contact_num >= 8)
				contact_num = 0;
		}
		else if(cmd.compare("SEARCH") == 0)
		{
			if (book.display_contact_list() == 0)
				book.display_contact_info();
		}
	}
	std::cout << "Goodbye" << std::endl;
	return (0);
}