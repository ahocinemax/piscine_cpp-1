/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:43 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:44 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string  str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;


	std::cout << "Memory address of str : " << &str << std::endl;
	std::cout << "Memory address of stringPTR : " << stringPTR << std::endl;	
	std::cout << "Memory address of stringref : " << &stringREF << std::endl;	

	return (0);
}
